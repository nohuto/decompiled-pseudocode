/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18017EF20
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x180192FF0 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // r10
  struct CInteractionTracker **v6; // rcx
  unsigned int v7; // ecx
  int v8; // eax
  struct CInteractionTracker *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (char *)this + 272;
  v3 = 0;
  v4 = *((unsigned int *)this + 74);
  v5 = *((_QWORD *)this + 34);
  if ( (_DWORD)v4 )
  {
    v6 = (struct CInteractionTracker **)*((_QWORD *)this + 34);
    while ( a2 != *v6 )
    {
      ++v3;
      ++v6;
      if ( v3 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v7 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4 + 1 < (unsigned int)v4 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)v2 + 5) )
    {
      v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, (__int64)v2, &v9);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(v5 + 8 * v4) = v9;
      *((_DWORD *)v2 + 6) = v7;
    }
  }
}
