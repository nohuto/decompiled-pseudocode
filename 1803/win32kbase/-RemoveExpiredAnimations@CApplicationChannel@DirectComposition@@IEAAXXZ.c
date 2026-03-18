/*
 * XREFs of ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0016268
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0017AA0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0006248 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z @ 0x1C0006FEC (-HasEnded@CAnimationMarshaler@DirectComposition@@QEAA_N_KPEAM@Z.c)
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C000A474 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0016058 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C01462BC (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z @ 0x1C0147DA8 (-SetTargetProperty@CAnimationBinding@DirectComposition@@QEAAXMPEA_N@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveExpiredAnimations(
        DirectComposition::CApplicationChannel *this)
{
  char *v1; // r14
  char *v3; // rsi
  LARGE_INTEGER PerformanceCounter; // r15
  DirectComposition::CAnimationMarshaler *v5; // rbx
  DirectComposition::CApplicationChannel *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // eax
  bool v10; // [rsp+50h] [rbp+8h] BYREF
  float v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = (char *)this + 336;
  v3 = (char *)*((_QWORD *)this + 42);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  while ( v3 != v1 )
  {
    v5 = (DirectComposition::CAnimationMarshaler *)(v3 - 120);
    v3 = *(char **)v3;
    if ( DirectComposition::CAnimationMarshaler::HasEnded(v5, PerformanceCounter.QuadPart, &v11) )
    {
      v7 = *((_QWORD *)v5 + 1);
      if ( v7 )
      {
        do
        {
          v8 = *(_QWORD *)(v7 + 40);
          v10 = 0;
          v9 = *(_DWORD *)(v7 + 8);
          if ( (v9 & 2) != 0 )
          {
            DirectComposition::CAnimationBinding::SetTargetProperty(
              (DirectComposition::CAnimationBinding *)v7,
              v11,
              &v10);
            if ( v10 )
              DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                this,
                *(struct DirectComposition::CResourceMarshaler **)(v7 + 16));
            DirectComposition::CApplicationChannel::DeleteAddingBinding(
              this,
              (struct DirectComposition::CAnimationBinding *)v7);
          }
          else
          {
            if ( (v9 & 4) != 0 )
            {
              if ( *((_QWORD *)this + 56) )
                DirectComposition::CApplicationChannel::RemoveFromBatchList(
                  v6,
                  (struct DirectComposition::CAnimationBinding **)v7,
                  (struct DirectComposition::CAnimationBinding ***)this + 56);
            }
            else
            {
              DirectComposition::CAnimationBinding::SetTargetProperty(
                (DirectComposition::CAnimationBinding *)v7,
                v11,
                &v10);
            }
            DirectComposition::CAnimationBinding::DetachAndDelete((DirectComposition::CAnimationBinding *)v7, this);
          }
          v7 = v8;
        }
        while ( v8 );
      }
    }
  }
}
