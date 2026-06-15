/*
 * XREFs of std::_Find_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800B0EBC
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B2F68 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

_QWORD *__fastcall std::_Find_if_unchecked_Microsoft::WRL::WeakRef_____ptr64__lambda_3640aac1012d9f944c7183fa6cd164a8___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rdi
  bool v6; // si
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v5 = a1;
  if ( a1 != a2 )
  {
    while ( 1 )
    {
      v9 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v5, &v9) >= 0 && v9 )
      {
        v8 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v9, &v8) >= 0 )
        {
          v6 = v8 == *a3;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
          goto LABEL_8;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      }
      v6 = 0;
LABEL_8:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v9);
      if ( !v6 && ++v5 != a2 )
        continue;
      return v5;
    }
  }
  return v5;
}
