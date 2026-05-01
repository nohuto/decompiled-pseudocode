/*
 * XREFs of ??1CReportWindowVisibilityChange@@QEAA@XZ @ 0x180104910
 * Callers:
 *     ??_GCIAMGlobals@@QEAAPEAXI@Z @ 0x18010549C (--_GCIAMGlobals@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 */

void __fastcall CReportWindowVisibilityChange::~CReportWindowVisibilityChange(CReportWindowVisibilityChange *this)
{
  __int64 *v1; // rdi
  __int64 *v3; // rsi

  v1 = (__int64 *)*((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 7);
    if ( v1 != v3 )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>(v1++);
      while ( v1 != v3 );
      v1 = (__int64 *)*((_QWORD *)this + 6);
    }
    std::_Deallocate((char *)v1, (__int64)(*((_QWORD *)this + 8) - (_QWORD)v1) >> 3, 8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 5);
  if ( *(_QWORD *)this )
  {
    CoTaskMemFree(*(LPVOID *)this);
    *(_QWORD *)this = 0LL;
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
}
