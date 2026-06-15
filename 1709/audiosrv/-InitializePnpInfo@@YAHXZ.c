/*
 * XREFs of ?InitializePnpInfo@@YAHXZ @ 0x1800A1110
 * Callers:
 *     ?MME_ServiceStart@@YAJXZ @ 0x1800A1540 (-MME_ServiceStart@@YAJXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x1800A0B38 (-BuildSecurityDescriptor@@YAPEAXKK@Z.c)
 *     ?ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z @ 0x1800A1844 (-ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z.c)
 */

__int64 InitializePnpInfo(void)
{
  unsigned int KernelObjectSecurity; // esi
  void *v1; // rax
  void *v2; // r14
  int v3; // r12d
  HANDLE CurrentProcess; // rax
  HANDLE v5; // rax
  void *v6; // r15
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  CAudioDGProcess *v9; // rcx
  unsigned __int16 v10; // dx
  PACL pDacl; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+38h] [rbp-40h] BYREF
  DWORD nLengthNeeded; // [rsp+80h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+10h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+90h] [rbp+18h] BYREF
  PACL v17; // [rsp+98h] [rbp+20h] BYREF

  KernelObjectSecurity = 0;
  RtlInitializeResource(&PnpInfoResource);
  gfPnpInfoResource = 1;
  v1 = BuildSecurityDescriptor();
  v2 = v1;
  if ( v1 )
  {
    v3 = 0;
    FileMappingAttributes.nLength = 24;
    FileMappingAttributes.lpSecurityDescriptor = v1;
    FileMappingAttributes.bInheritHandle = 0;
    CurrentProcess = GetCurrentProcess();
    v5 = CreateFileMappingW(CurrentProcess, &FileMappingAttributes, 4u, 0, 0xCu, L"Global\\mmGlobalPnpInfo");
    hPnpInfo = v5;
    if ( v5 )
    {
      KernelObjectSecurity = GetKernelObjectSecurity(v5, 4u, 0LL, 0, &nLengthNeeded);
      if ( GetLastError() == 122 )
      {
        v6 = HeapAlloc(hHeap, 0, nLengthNeeded);
        if ( v6 )
        {
          if ( GetKernelObjectSecurity(hPnpInfo, 4u, v6, nLengthNeeded, &nLengthNeeded)
            && GetSecurityDescriptorDacl(v2, &bDaclPresent, &pDacl, &bDaclDefaulted)
            && bDaclPresent
            && GetSecurityDescriptorDacl(v6, &bDaclPresent, &v17, &bDaclDefaulted)
            && bDaclPresent )
          {
            v3 = ValidateSecurityDescriptorDacl(pDacl, v17);
          }
          HeapFree(hHeap, 0, v6);
        }
      }
    }
    HeapFree(hHeap, 0, v2);
    if ( v3 )
    {
      if ( hPnpInfo )
      {
        v7 = MapViewOfFile(hPnpInfo, 2u, 0, 0, 0LL);
        g_pPnpInfoShared = v7;
        if ( v7 )
        {
          *(_QWORD *)v7 = 0LL;
          v7[2] = 0;
          *v7 = 12;
          v7[1] = 0;
          v8 = HeapAlloc(hHeap, 8u, 0xCuLL);
          g_pPnpInfoActual = v8;
          if ( v8 )
          {
            *v8 = 12;
            *((_DWORD *)g_pPnpInfoActual + 1) = 0;
            return 1;
          }
          v9 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v10 = 20;
LABEL_38:
            WPP_SF_(*((_QWORD *)v9 + 2), v10, (__int64)&WPP_b102d38601a836944f027ba64192a35a_Traceguids);
          }
        }
        else
        {
          v9 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v10 = 21;
            goto LABEL_38;
          }
        }
      }
      else
      {
        v9 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v10 = 22;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v10 = 23;
        goto LABEL_38;
      }
    }
  }
  else
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = 24;
      goto LABEL_38;
    }
  }
  if ( !KernelObjectSecurity )
  {
    if ( g_pPnpInfoActual )
      HeapFree(hHeap, 0, g_pPnpInfoActual);
    if ( g_pPnpInfoShared )
      UnmapViewOfFile(g_pPnpInfoShared);
    if ( hPnpInfo )
      CloseHandle(hPnpInfo);
    if ( gfPnpInfoResource )
      RtlDeleteResource(&PnpInfoResource);
    g_pPnpInfoShared = 0LL;
    hPnpInfo = 0LL;
    gfPnpInfoResource = 0;
  }
  return KernelObjectSecurity;
}
