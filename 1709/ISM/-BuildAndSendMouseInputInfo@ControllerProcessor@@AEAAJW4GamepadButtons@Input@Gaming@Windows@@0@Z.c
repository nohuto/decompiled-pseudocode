/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJW4GamepadButtons@Input@Gaming@Windows@@0@Z @ 0x18003F504
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003E2F0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AUInputInfo@@K@Z @ 0x18003F664 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AUInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // r10
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  unsigned int i; // r11d
  int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rcx
  _DWORD *v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  _BYTE v18[2848]; // [rsp+30h] [rbp-B58h] BYREF

  v3 = &unk_1800DFED4;
  v4 = 0;
  v5 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v10 = a3 & *(v3 - 1);
    if ( (v10 != 0) != ((a2 & *(v3 - 1)) != 0) )
    {
      v11 = 0;
      v12 = 0LL;
      v13 = &unk_1800DFE90;
      while ( *v3 != *v13 )
      {
        ++v11;
        ++v12;
        v13 += 3;
        if ( v11 >= 5 )
          goto LABEL_11;
      }
      *(_DWORD *)(a1 + 4 * v12 + 3860) = v10 != 0;
      if ( v10 )
        v14 = *((_DWORD *)&unk_1800DFE90 + 3 * v12 + 2);
      else
        v14 = *((_DWORD *)&unk_1800DFE90 + 3 * v12 + 1);
      v5 |= v14;
    }
LABEL_11:
    v3 += 2;
  }
  if ( v5 )
  {
    ControllerProcessor::BuildMouseInputInfo(a1, v18, v5);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 256) + 48LL))(*(_QWORD *)(a1 + 256), v18);
    v4 = v15;
    if ( v15 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 12, 1229, v15);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v4;
}
