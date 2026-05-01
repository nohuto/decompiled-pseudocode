/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CFTMCrossProcClientImpl@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x18001F620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFTMCrossProcClientImpl::v_GetAdditionalDataSizeMax(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  *a7 = *((_DWORD *)this + 6);
  return *((_QWORD *)this + 8) == 0LL ? 0x8000FFFF : 0;
}
