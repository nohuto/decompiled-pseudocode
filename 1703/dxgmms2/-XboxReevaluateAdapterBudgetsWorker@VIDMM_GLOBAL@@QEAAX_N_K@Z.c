/*
 * XREFs of ?XboxReevaluateAdapterBudgetsWorker@VIDMM_GLOBAL@@QEAAX_N_K@Z @ 0x1C004777C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ @ 0x1C001F160 (-GetSystemMemoryCommitLimit@VIDMM_GLOBAL@@QEAA_KXZ.c)
 *     ?ReadCommitLimitInformation@VIDMM_GLOBAL@@KAX_N@Z @ 0x1C00479A4 (-ReadCommitLimitInformation@VIDMM_GLOBAL@@KAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::XboxReevaluateAdapterBudgetsWorker(VIDMM_GLOBAL *this, bool a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 SystemMemoryCommitLimit; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned int i; // ebx
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  char *v14; // r14
  unsigned __int64 *v15; // r11
  unsigned __int64 *v16; // r10
  _DWORD *v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v21[5]; // [rsp+20h] [rbp-28h] BYREF

  qword_1C003C128 = a3;
  VIDMM_GLOBAL::ReadCommitLimitInformation(a2);
  v5 = VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture;
  if ( !a2 )
    v5 = 11 * VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture / 0xA;
  v6 = qword_1C003C140;
  if ( qword_1C003C140 <= v5 )
  {
    v6 = v5;
    qword_1C003C140 = v5;
  }
  *((_QWORD *)this + 807) = v6;
  SystemMemoryCommitLimit = VIDMM_GLOBAL::GetSystemMemoryCommitLimit(this);
  v9 = SystemMemoryCommitLimit;
  if ( v8 && SystemMemoryCommitLimit >= v8 )
    v9 = v8;
  for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
  {
    v11 = 2LL;
    v12 = v9;
    v13 = *((_QWORD *)this + 5150) + 280LL * i;
    if ( *(_QWORD *)(*((_QWORD *)this + 5021) + 472LL * i) )
      v12 = *(_QWORD *)(*((_QWORD *)this + 5021) + 472LL * i);
    v14 = (char *)v21 - v13;
    v15 = (unsigned __int64 *)(v13 + 96);
    v16 = (unsigned __int64 *)(v13 + 64);
    v21[1] = *(_QWORD *)(v13 + 24);
    v21[0] = v12;
    v17 = (_DWORD *)(v13 + 240);
    do
    {
      v18 = *(_QWORD *)&v14[(_QWORD)v16 - 64] * (unsigned __int64)(unsigned int)(100 - *v17) / 0x64;
      *(v16 - 4) = v18;
      *(v16 - 2) = v18;
      v19 = 3LL;
      *v16 = *(_QWORD *)&v14[(_QWORD)v16 - 64] * (unsigned __int64)(unsigned int)(100 - *v17 - dword_1C003C374) / 0x64;
      do
      {
        v20 = 3LL;
        do
        {
          *v15++ = *v16;
          --v20;
        }
        while ( v20 );
        --v19;
      }
      while ( v19 );
      ++v17;
      v16[2] = *(v16 - 4) >> 1;
      ++v16;
      --v11;
    }
    while ( v11 );
  }
  VIDMM_GLOBAL::RequestNewBudget(this, 0);
}
