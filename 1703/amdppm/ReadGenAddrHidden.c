/*
 * XREFs of ReadGenAddrHidden @ 0x1C0008C6C
 * Callers:
 *     ReadGenAddrMaybeHidden @ 0x1C0008C2C (ReadGenAddrMaybeHidden.c)
 *     SetPerfStateIOHidden @ 0x1C0009080 (SetPerfStateIOHidden.c)
 *     InitCpcStatesInternal @ 0x1C0024B54 (InitCpcStatesInternal.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0008AC4 (ReadGenAddr.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(unsigned int a1, __int64 a2)
{
  char v5; // al
  __int64 v6; // r11
  int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  unsigned __int8 v11; // cl
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  v5 = *(_BYTE *)a2;
  if ( !*(_BYTE *)a2 || v5 == 10 || v5 == 126 )
    return ReadGenAddr(a2);
  v6 = *(_QWORD *)(a2 + 4);
  v7 = *(unsigned __int8 *)(a2 + 3);
  v12 = 0LL;
  if ( v5 != 1 )
  {
    if ( v5 == 127 && v7 == 64 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))qword_1C00116B8)(a1, (unsigned int)v6, &v12);
      goto LABEL_18;
    }
    return 0LL;
  }
  switch ( v7 )
  {
    case 8:
      v9 = 1LL;
      goto LABEL_17;
    case 16:
      v9 = 2LL;
      goto LABEL_17;
    case 32:
      v9 = 4LL;
LABEL_17:
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, unsigned __int64 *))qword_1C00116C8)(
        a1,
        (unsigned __int16)v6,
        v9,
        &v12);
LABEL_18:
      v8 = v12;
      if ( v12 )
      {
        v10 = *(_BYTE *)(a2 + 2);
        if ( v10 )
          v8 = v12 >> v10;
        v11 = *(_BYTE *)(a2 + 1);
        if ( v11 < 0x40u )
          v8 &= (1LL << v11) - 1;
      }
      return v8;
  }
  return 0LL;
}
