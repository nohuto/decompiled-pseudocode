/*
 * XREFs of ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18015FE1C
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016BBC4 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

void __fastcall CExpressionManager::RegisterInteractionTrackerNotification(
        CExpressionManager *this,
        struct CInteractionTracker *a2)
{
  char *v2; // r8
  unsigned int v3; // ecx
  struct CInteractionTracker **v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // [rsp+40h] [rbp+8h]
  struct CInteractionTracker *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 272;
  v3 = 0;
  v4 = *(struct CInteractionTracker ***)v2;
  if ( *((_DWORD *)v2 + 6) )
  {
    while ( a2 != *v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= *((_DWORD *)v2 + 6) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = *((unsigned int *)v2 + 6);
    v6 = v9;
    v7 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v6 = v5 + 1;
    if ( v7 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7 < (unsigned int)v5 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)v2 + 5) )
    {
      v8 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v2, 8u, (__int64)v2, &v10);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v2 + 8 * v5) = v10;
      *((_DWORD *)v2 + 6) = v6;
    }
  }
}
