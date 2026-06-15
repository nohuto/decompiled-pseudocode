/*
 * XREFs of ?InitializePnpInfo@@YAHXZ @ 0x180036764
 * Callers:
 *     ?MME_ServiceStart@@YAJXZ @ 0x18003639C (-MME_ServiceStart@@YAJXZ.c)
 * Callees:
 *     ?ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z @ 0x1800369B8 (-ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z.c)
 *     ?BuildSecurityDescriptor@@YAPEAXKK@Z @ 0x180036AE8 (-BuildSecurityDescriptor@@YAPEAXKK@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 */

__int64 InitializePnpInfo(void)
{
  unsigned int KernelObjectSecurity; // esi
  unsigned int v1; // edx
  unsigned int v2; // ecx
  void *v3; // rax
  void *v4; // r14
  int v5; // r12d
  HANDLE CurrentProcess; // rax
  HANDLE v7; // rax
  void *v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  CVolumeStrip *v12; // rcx
  __int64 v13; // rdx
  PACL pDacl; // [rsp+30h] [rbp-48h] BYREF
  struct _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+38h] [rbp-40h] BYREF
  DWORD nLengthNeeded; // [rsp+80h] [rbp+8h] BYREF
  WINBOOL bDaclPresent; // [rsp+88h] [rbp+10h] BYREF
  WINBOOL bDaclDefaulted; // [rsp+90h] [rbp+18h] BYREF
  PACL v19; // [rsp+98h] [rbp+20h] BYREF

  KernelObjectSecurity = 0;
  RtlInitializeResource(&PnpInfoResource);
  gfPnpInfoResource = 1;
  v3 = BuildSecurityDescriptor(v2, v1);
  v4 = v3;
  if ( v3 )
  {
    v5 = 0;
    FileMappingAttributes.nLength = 24;
    FileMappingAttributes.lpSecurityDescriptor = v3;
    FileMappingAttributes.bInheritHandle = 0;
    CurrentProcess = GetCurrentProcess();
    v7 = CreateFileMappingW(CurrentProcess, &FileMappingAttributes, 4u, 0, 0xCu, L"Global\\mmGlobalPnpInfo");
    hPnpInfo = v7;
    if ( v7 )
    {
      KernelObjectSecurity = GetKernelObjectSecurity(v7, 4u, 0LL, 0, &nLengthNeeded);
      if ( GetLastError() == 122 )
      {
        v8 = HeapAlloc(hHeap, 0, nLengthNeeded);
        if ( v8 )
        {
          if ( GetKernelObjectSecurity(hPnpInfo, 4u, v8, nLengthNeeded, &nLengthNeeded)
            && GetSecurityDescriptorDacl(v4, &bDaclPresent, &pDacl, &bDaclDefaulted)
            && bDaclPresent
            && GetSecurityDescriptorDacl(v8, &bDaclPresent, &v19, &bDaclDefaulted)
            && bDaclPresent )
          {
            v5 = ValidateSecurityDescriptorDacl(pDacl, v19);
          }
          HeapFree(hHeap, 0, v8);
        }
      }
    }
    HeapFree(hHeap, 0, v4);
    if ( v5 )
    {
      if ( hPnpInfo )
      {
        v9 = MapViewOfFile(hPnpInfo, 2u, 0, 0, 0LL);
        g_pPnpInfoShared = v9;
        if ( v9 )
        {
          *(_QWORD *)v9 = 0LL;
          v9[2] = 0;
          *v9 = 12;
          v9[1] = 0;
          v10 = HeapAlloc(hHeap, 8u, 0xCuLL);
          g_pPnpInfoActual = v10;
          if ( v10 )
          {
            *v10 = 12;
            *((_DWORD *)g_pPnpInfoActual + 1) = 0;
            return 1;
          }
          v12 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v13 = 20LL;
LABEL_38:
            WPP_SF_(*((_QWORD *)v12 + 2), v13, &WPP_b102d38601a836944f027ba64192a35a_Traceguids);
          }
        }
        else
        {
          v12 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v13 = 21LL;
            goto LABEL_38;
          }
        }
      }
      else
      {
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v13 = 22LL;
          goto LABEL_38;
        }
      }
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v13 = 23LL;
        goto LABEL_38;
      }
    }
  }
  else
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v13 = 24LL;
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
