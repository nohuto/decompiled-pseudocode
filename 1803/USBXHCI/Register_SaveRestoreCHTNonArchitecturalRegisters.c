/*
 * XREFs of Register_SaveRestoreCHTNonArchitecturalRegisters @ 0x1C001924C
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_SaveRestoreCHTNonArchitecturalRegisters(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  __int64 v8; // rbp
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v12[0] = 35076;
  v12[1] = 35348;
  v12[2] = 35620;
  result = *(_QWORD *)(v2 + 272);
  if ( (result & 0x80000000000000LL) != 0 )
  {
    v6 = 0;
    v7 = v12;
    do
    {
      v8 = *(_QWORD *)(a1 + 24) + *v7;
      result = XilRegister_ReadUlong(a1, v8);
      v9 = *(_DWORD *)(a1 + 116);
      if ( a2 )
      {
        if ( (result & 0x2000000) != 0 )
          v10 = v9 | (1 << v6);
        else
          v10 = v9 & ~(1 << v6);
        *(_DWORD *)(a1 + 116) = v10;
      }
      else
      {
        if ( _bittest(&v9, v6) )
          v11 = result | 0x2000000;
        else
          v11 = result & 0xFDFFFFFF;
        result = XilRegister_WriteUlong(a1, v8, v11);
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 3 );
  }
  return result;
}
