/*
 * XREFs of AcpiDeviceReset @ 0x1C0079A10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceDeviceReset @ 0x1C0007314 (AcpiDiagTraceDeviceReset.c)
 *     AcpiPlatformLevelDeviceReset @ 0x1C0020D3C (AcpiPlatformLevelDeviceReset.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C0079AB4 (AcpiFunctionLevelDeviceReset.c)
 */

__int64 __fastcall AcpiDeviceReset(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  unsigned int v7; // esi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int (__fastcall *v12)(_QWORD, _QWORD, _QWORD, __int64); // rax

  v4 = *(_QWORD *)(a1 + 8);
  v7 = a2;
  if ( !(_DWORD)a2 )
  {
    v10 = AcpiFunctionLevelDeviceReset(a1, a2, a4);
    goto LABEL_6;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v10 = AcpiPlatformLevelDeviceReset(a1);
LABEL_6:
    v9 = v10;
    goto LABEL_7;
  }
  v9 = -1073741637;
LABEL_7:
  AcpiDiagTraceDeviceReset(v4, v7, v9);
  if ( v9 == -1073741637 )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      v12 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 32);
      if ( v12 )
        return v12(*(_QWORD *)(v11 + 8), v7, a3, a4);
    }
  }
  return v9;
}
