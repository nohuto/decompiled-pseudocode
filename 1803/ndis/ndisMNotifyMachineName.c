/*
 * XREFs of ndisMNotifyMachineName @ 0x1C00C9900
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisMDoMiniportOp @ 0x1C00C9AC8 (ndisMDoMiniportOp.c)
 */

void __fastcall ndisMNotifyMachineName(__int64 a1)
{
  int v1; // edi
  unsigned __int8 v2; // al
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  NTSTATUS v5; // eax
  HANDLE v6; // rcx
  const wchar_t *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  PVOID v10; // rbx
  _UNICODE_STRING v11; // [rsp+40h] [rbp+7h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+17h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+67h] BYREF
  PVOID P; // [rsp+A8h] [rbp+6Fh] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 464) && (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
  {
    v2 = *(_BYTE *)(a1 + 32);
    if ( v2 <= 6u && (v2 != 6 || *(_BYTE *)(a1 + 33) < 0x51u) && !RtlIsStateSeparationEnabled() )
    {
      v3 = 0x7FFFLL;
      *(_DWORD *)&v11.Length = 0;
      v4 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      v11.Buffer = 0LL;
      while ( *v4 )
      {
        ++v4;
        if ( !--v3 )
          return;
      }
      v11.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters";
      KeyHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      v11.Length = 2 * (0x7FFF - v3);
      v11.MaximumLength = v11.Length + 2;
      ObjectAttributes.ObjectName = &v11;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
      v6 = KeyHandle;
      if ( !v5 )
      {
        P = 0LL;
        v7 = L"HostName";
        *(_DWORD *)&v11.Length = 0;
        v11.Buffer = 0LL;
        v8 = 0x7FFFLL;
        while ( *v7 )
        {
          ++v7;
          if ( !--v8 )
            goto LABEL_21;
        }
        v11.Buffer = L"HostName";
        v11.Length = 2 * (0x7FFF - v8);
        v11.MaximumLength = v11.Length + 2;
        v9 = KRegKey::QueryValueString(&KeyHandle, &v11, &P);
        v10 = P;
        if ( !v9 )
          ndisMDoMiniportOp(v1, 0, 66074, *((_QWORD *)P + 1), *(unsigned __int16 *)P, 1, 0);
        if ( v10 )
          ExFreePoolWithTag(v10, 0x7274534Bu);
        v6 = KeyHandle;
      }
LABEL_21:
      if ( v6 )
        ZwClose(v6);
    }
  }
}
