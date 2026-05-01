/*
 * XREFs of ??$?0USERVICE_AVAILABILITY_CHANGED_DATA@@@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@QEAA@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x1800F5B78
 * Callers:
 *     ??$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@@WRL@Microsoft@@$$QEAUSERVICE_AVAILABILITY_CHANGED_DATA@@@Z @ 0x180102158 (--$CreateRefCountedObj@USERVICE_AVAILABILITY_CHANGED_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObje.c)
 * Callees:
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x1800F7954 (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = *a2;
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(a1 + 8, v4);
  v5 = a2[1];
  a2[1] = 0LL;
  Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(a1 + 16, v5);
  *(_DWORD *)(a1 + 40) = *((_DWORD *)a2 + 8);
  *(_DWORD *)(a1 + 24) = *((_DWORD *)a2 + 4);
  *(_QWORD *)(a1 + 32) = a2[3];
  a2[3] = 0LL;
  *((_DWORD *)a2 + 8) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = &CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::`vftable';
  return a1;
}
