/*
 * XREFs of AudioServerInitialize @ 0x18002E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 */

__int64 __fastcall AudioServerInitialize(
        void *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct _RTL_CRITICAL_SECTION *a5,
        struct _GUID *a6,
        unsigned int a7,
        struct VadServerSettings *a8,
        unsigned __int16 **a9,
        void **a10)
{
  return AudioServerInitialize_Internal(a1, a2, a3, a4, a5, a6, a7, a8, a9, 0LL, a10);
}
