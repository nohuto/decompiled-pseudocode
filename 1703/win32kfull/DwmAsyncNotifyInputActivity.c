/*
 * XREFs of DwmAsyncNotifyInputActivity @ 0x1C00FC720
 * Callers:
 *     PostInputMessage @ 0x1C0049470 (PostInputMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyInputActivity(PVOID Object, int a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  int v9; // ecx
  _BYTE v10[56]; // [rsp+20h] [rbp-58h] BYREF

  v6 = -1073741823;
  if ( Object && a3 )
  {
    memset(&v10[2], 0, 0x36uLL);
    *(_DWORD *)v10 = 3670032;
    *(_WORD *)&v10[4] = 0x8000;
    *(_DWORD *)&v10[40] = 1073741912;
    *(_DWORD *)&v10[44] = a2;
    if ( (unsigned int)(a2 - 256) > 1 )
    {
      if ( (unsigned int)(a2 - 513) > 0xD )
        goto LABEL_5;
      v9 = 8707;
      if ( !_bittest(&v9, a2 - 513) )
        goto LABEL_5;
    }
    else
    {
      v7 = *(_QWORD *)(a3 + 16);
      if ( v7 > 0x28 || (unsigned int)v7 < 0x21 )
        goto LABEL_5;
      *(_QWORD *)&v10[48] = *(_QWORD *)(a3 + 16);
    }
    v6 = LpcRequestPort(Object, v10);
LABEL_5:
    ObfDereferenceObject(Object);
  }
  return v6;
}
