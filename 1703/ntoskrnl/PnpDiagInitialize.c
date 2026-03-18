/*
 * XREFs of PnpDiagInitialize @ 0x1408261A8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     McGenEventRegister @ 0x140167E78 (McGenEventRegister.c)
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

__int64 __fastcall PnpDiagInitialize(__int64 a1, ETWENABLECALLBACK *a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  NTSTATUS v4; // eax

  v2 = McGenEventRegister(
         &MS_KernelPnP_Provider,
         a2,
         &MS_KernelPnP_Provider_Context,
         &Microsoft_Windows_Kernel_PnPHandle);
  v3 = 0;
  PnpEtwHandle = Microsoft_Windows_Kernel_PnPHandle;
  if ( v2 < 0 )
    v3 = v2;
  v4 = EtwRegister(
         &MS_KernelPnP_Rundown_Provider,
         (PETWENABLECALLBACK)PnpDiagRundownRegisterCallback,
         0LL,
         &PnpRundownEtwHandle);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
