/*
 * XREFs of ?HandleDeleteAssociatedDevices@CD3DDeviceManager@@QEAAXAEBU_GUID@@@Z @ 0x180195868
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18013F8A0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ @ 0x180135A54 (-DeleteUnusableDevices@CD3DDeviceManager@@AEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::HandleDeleteAssociatedDevices(CD3DDeviceManager *this, const struct _GUID *a2)
{
  CD3DDeviceManager *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  CD3DDeviceLevel1 *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  LODWORD(v4) = qword_18023E900;
  *(struct _GUID *)((char *)&qword_18023E900 + 4) = *a2;
  while ( (_DWORD)v4 )
  {
    v4 = (unsigned int)(v4 - 1);
    v3 = (CD3DDeviceManager *)(5 * v4);
    v5 = *(_QWORD *)(qword_18023E890 + 40 * v4 + 16) - *(_QWORD *)&a2->Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(qword_18023E890 + 40 * v4 + 24) - *(_QWORD *)a2->Data4;
    if ( !v5 )
    {
      v6 = *(CD3DDeviceLevel1 **)(qword_18023E890 + 40 * v4);
      *((_DWORD *)v6 + 218) = -2003304307;
      CD3DDeviceLevel1::ProcessDeviceLost(v6);
    }
  }
  CD3DDeviceManager::DeleteUnusableDevices(v3);
  *(__int64 *)((char *)&qword_18023E900 + 4) = 0LL;
  qword_18023E90C = 0LL;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
}
