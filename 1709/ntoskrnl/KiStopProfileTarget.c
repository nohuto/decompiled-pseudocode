/*
 * XREFs of KiStopProfileTarget @ 0x1402089D0
 * Callers:
 *     KeStopProfile @ 0x140208460 (KeStopProfile.c)
 * Callees:
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(__int64 *Argument)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 **v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rsi
  int v9; // edx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG_PTR result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int16 *v16[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v17; // [rsp+30h] [rbp-28h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v2 = *Argument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v2 + 242) )
  {
    v4 = (__int64 *)(v2 + 8);
    *(_BYTE *)(v2 + 242) = 0;
    if ( (__int64 *)*v4 != v4 )
    {
      v5 = (__int64 *)*v4;
      v6 = *(__int64 ***)(v2 + 16);
      if ( *(__int64 **)(*v4 + 8) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = (__int64)v6;
    }
    v7 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( *((_DWORD *)v8 + 4) != *(__int16 *)(v2 + 240) );
    v17 = 0;
    v16[1] = *(unsigned __int16 **)(v2 + 80);
    v16[0] = (unsigned __int16 *)(v2 + 72);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v18, v16) )
    {
      v9 = v18;
      if ( (*((_DWORD *)v8 + v18 + 48))-- == 1 )
        KeAddProcessorAffinityEx((_WORD *)Argument + 8, v9);
    }
    _InterlockedOr(v15, 0);
    KeSubtractAffinityEx((char *)v8 + 24, (char *)Argument + 16, (_BYTE *)v8 + 24);
    if ( (unsigned int)KeIsEmptyAffinityEx((_WORD *)v8 + 12) )
    {
      v11 = *v8;
      v12 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v12 != v8 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      Argument[23] = (__int64)v8;
    }
    *((_BYTE *)Argument + 192) = 1;
  }
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStopProfileInterrupt((unsigned int)*(__int16 *)(v2 + 240));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
