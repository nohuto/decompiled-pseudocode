/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x180033C2C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180032ED0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180033D60 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x180033EE8 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AULegacyInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *a1, int a2, int a3)
{
  _DWORD *v3; // r9
  int v5; // ebx
  unsigned __int16 v6; // cx
  unsigned int i; // r10d
  int v10; // r11d
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _DWORD *v13; // rax
  int v14; // eax
  _BYTE v16[1744]; // [rsp+20h] [rbp-708h] BYREF

  v3 = &unk_1800FAC64;
  v5 = 0;
  v6 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v10 = a3 & *(v3 - 1);
    if ( (v10 != 0) != ((a2 & *(v3 - 1)) != 0) )
    {
      v11 = 0;
      v12 = 0LL;
      v13 = &unk_1800FAC20;
      while ( *v3 != *v13 )
      {
        ++v11;
        ++v12;
        v13 += 3;
        if ( v11 >= 5 )
          goto LABEL_11;
      }
      *((_DWORD *)a1 + v12 + 1725) = v10 != 0;
      if ( v10 )
        v14 = *((_DWORD *)&unk_1800FAC20 + 3 * v12 + 2);
      else
        v14 = *((_DWORD *)&unk_1800FAC20 + 3 * v12 + 1);
      v6 |= v14;
    }
LABEL_11:
    v3 += 2;
  }
  if ( v6 )
  {
    ControllerProcessor::BuildMouseInputInfo(a1, v16, v6);
    v5 = ControllerProcessor::SendMouseInputInfo(a1, (struct LegacyInputInfo *)v16);
    if ( v5 < 0 )
    {
      if ( IsDebuggerPresent() )
        __debugbreak();
      RaiseFailFastException(0LL, 0LL, 0);
    }
  }
  return (unsigned int)v5;
}
