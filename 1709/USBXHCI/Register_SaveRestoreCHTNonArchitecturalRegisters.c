/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001F548
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 */

int __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int *v7; // rsi
  __int64 v8; // rbp
  __int64 Ulong; // r8
  int v10; // eax
  _DWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12[0] = 35076;
  v12[1] = 35348;
  v12[2] = 35620;
  v5 = *(_QWORD *)(v2 + 272);
  if ( (v5 & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v12;
    do
    {
      v8 = *(_QWORD *)(a1 + 24) + *v7;
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, v8);
      v10 = *(_DWORD *)(a1 + 116);
      if ( a2 )
      {
        if ( (Ulong & 0x2000000) != 0 )
          LODWORD(v5) = v10 | (1 << v6);
        else
          LODWORD(v5) = v10 & ~(1 << v6);
        *(_DWORD *)(a1 + 116) = v5;
      }
      else
      {
        if ( _bittest(&v10, v6) )
          LODWORD(Ulong) = Ulong | 0x2000000;
        else
          LODWORD(Ulong) = Ulong & 0xFDFFFFFF;
        LODWORD(v5) = XilRegister_WriteUlong(a1, v8, Ulong);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return v5;
}
