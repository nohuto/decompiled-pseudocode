/*
 * XREFs of NtGdiDDCCISetVCPFeature @ 0x1C024AD80
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C024A5E0 (-DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C024A7FC (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall NtGdiDDCCISetVCPFeature(void *a1, char a2, __int16 a3)
{
  PVOID v3; // rbx
  int HandleObject; // ebx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  CPhysicalMonitorHandle *v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = qword_1C0327BA0;
  CAutoMutex::CAutoMutex((CAutoMutex *)v9, (struct CMutex *)qword_1C0327BA0);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v3 + 8, a1, &v10);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSetVCPFeature(v10, a2, a3);
  CAutoMutex::~CAutoMutex((CAutoMutex *)v9);
  return (unsigned int)HandleObject;
}
