/*
 * XREFs of DpiQueryDisplayIDDescriptor @ 0x1C020DF34
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C023BA38 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F4918 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiQueryDisplayIDDescriptor(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // eax
  DXGADAPTER *v8; // rbx
  __int64 v9; // r8
  int v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+80h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 40) + 28LL) < 0x8001u )
    return 3223126017LL;
  v7 = *a2;
  v13 = *(_DWORD *)(*(_QWORD *)(v3 + 936) + 24LL);
  v11 = a3;
  v10 = v7;
  memset(&v12, 0, sizeof(v12));
  v12.pInputData = &v13;
  v12.Type = DXGKQAITYPE_DISPLAYID_DESCRIPTOR;
  v12.pOutputData = &v10;
  v12.InputDataSize = 4;
  v12.OutputDataSize = 16;
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
  v8 = *(DXGADAPTER **)(v5 + 3728);
  DXGADAPTER::IsCoreResourceSharedOwner(v8);
  LODWORD(v8) = DXGADAPTER::DdiQueryAdapterInfo(v8, &v12, v9);
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
  result = (unsigned int)v8;
  *a2 = v10;
  return result;
}
