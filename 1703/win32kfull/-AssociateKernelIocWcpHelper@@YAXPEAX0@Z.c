/*
 * XREFs of ?AssociateKernelIocWcpHelper@@YAXPEAX0@Z @ 0x1C0109804
 * Callers:
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall AssociateKernelIocWcpHelper(void *a1, void *a2)
{
  if ( (gdwMitConfig & 4) != 0 )
    IOCPDispatcher::ReassociateNonSenserHandleForIOCP(gpIOCPDispatcher, ghDITRITEventWcp, ghDITRITEvent);
  else
    AssociateKernelIocpWcp(ghDITRITEventWcp, ghDITIocp, ghDITRITEvent, ghDITRITEventWcp, 1LL, 0, 0LL);
}
