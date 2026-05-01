/*
 * XREFs of ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x180043980
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18003C5E4 (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CApplicationManager::GetPerApplicationData(__int64 a1, __int64 a2, _QWORD *a3)
{
  int ApplicationData; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  ApplicationData = CApplicationManager::_GetApplicationData(a1 - 240, a2, (__int64)&v7);
  if ( ApplicationData >= 0 )
  {
    v5 = v7;
    v7 = 0LL;
    *a3 = v5;
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(&v7);
  return (unsigned int)ApplicationData;
}
