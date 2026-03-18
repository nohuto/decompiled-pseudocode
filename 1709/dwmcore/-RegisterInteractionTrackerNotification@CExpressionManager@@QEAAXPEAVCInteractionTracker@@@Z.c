/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180155F20
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016A6C4 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rcx
  struct CInteractionTracker **v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // eax
  signed int v8; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h]
  struct CInteractionTracker *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 272;
  v3 = 0;
  v4 = *((unsigned int *)this + 74);
  if ( (_DWORD)v4 )
  {
    v5 = *(struct CInteractionTracker ***)v2;
    while ( a2 != *v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= (unsigned int)v4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = v9;
    v7 = v4 + 1;
    if ( (int)v4 + 1 >= (unsigned int)v4 )
      v6 = v4 + 1;
    if ( v7 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7 < (unsigned int)v4 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v2 + 5) )
    {
      v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, (__int64)v2, &v10);
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = v10;
      *((_DWORD *)v2 + 6) = v6;
    }
  }
}
