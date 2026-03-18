/*
 * XREFs of NtGdiDDCCISaveCurrentSettings @ 0x1C024AD10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ @ 0x1C024A43C (-DdcciSaveCurrentSettings@CPhysicalMonitorHandle@@QEAAJXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C024A7FC (-GetHandleObject@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@@QEAAJPEAXPEAPEAVCPhysicalM.c)
 */

__int64 __fastcall NtGdiDDCCISaveCurrentSettings(void *a1)
{
  PVOID v1; // rbx
  int HandleObject; // ebx
  CPhysicalMonitorHandle *v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = qword_1C0327BA0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v6, (struct CMutex *)qword_1C0327BA0);
  HandleObject = CMonitorHandleTable<CPhysicalMonitorHandle,void *>::GetHandleObject((__int64)v1 + 8, a1, &v5);
  if ( HandleObject >= 0 )
    HandleObject = CPhysicalMonitorHandle::DdcciSaveCurrentSettings(v5);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v6);
  return (unsigned int)HandleObject;
}
