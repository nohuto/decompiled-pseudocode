/*
 * XREFs of sub_180040514 @ 0x180040514
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 *     sub_1800413EC @ 0x1800413EC (sub_1800413EC.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_180040514(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbp
  int v4; // edi
  int v5; // esi
  char v6; // al
  unsigned __int16 *v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = -1073741515;
  v5 = v1 & 0x200;
  if ( (v1 & 0x200) != 0 )
    v6 = sub_1800413EC(a1, v13);
  else
    v6 = (v1 & 0x28) == 32;
  v7 = (unsigned __int16 *)v13;
  if ( !v5 )
    v7 = (unsigned __int16 *)a1;
  if ( v6 )
  {
    v8 = (_QWORD *)(a1 + 24);
    v4 = sub_18003FFC8(v7, v3 + 88, (unsigned __int16 *)(v3 + 72), (_QWORD *)(a1 + 24));
    if ( v4 >= 0 )
    {
      *(_DWORD *)(a1 + 32) |= 0x100000u;
      sub_18003BC9C(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v14 = 0LL;
      *(_DWORD *)(v3 + 264) = sub_1800404E8((unsigned __int16 *)(v3 + 88));
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v9, v10, v11);
      v4 = sub_18002BF70(v3 + 88, v3 + 72, *(unsigned int *)(a1 + 32), &v14, *(_DWORD *)(v3 + 264));
      RtlReleaseSRWLockExclusive(&qword_18015D070);
      if ( v14 )
      {
        sub_180070738(a1, v14);
      }
      else
      {
        sub_18003BC9C(0, v3 + 72, 0x14AAu);
        v4 = sub_18002BBDC(a1);
      }
      ZwClose(*v8);
      *v8 = 0LL;
    }
  }
  return (unsigned int)v4;
}
