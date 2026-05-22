/*
 * XREFs of ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800C3DE4
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1800C3EE0 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJP.c)
 *     ?RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphNodePropertiesUpdatedCallback@234@@Z @ 0x1800C41B0 (-RegisterNodePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UE.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

int __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::EnsurePropertyThread(HANDLE *lpParameter)
{
  char *v1; // rsi
  int result; // eax
  const char *v3; // r9
  char *Thread; // rbx
  const char *v5; // r9
  void *v6; // rbp
  DWORD LastError; // edi
  char v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (char *)(lpParameter + 18);
  if ( (char *)lpParameter[18] - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    Thread = (char *)CreateThread(
                       0LL,
                       0LL,
                       (LPTHREAD_START_ROUTINE)Windows::Internal::Holographic::SpatialGraphDriverClient::PropertyUpdatedListenerThreadProcV2Static,
                       lpParameter,
                       0,
                       0LL);
    if ( v1 != &v8 )
    {
      v6 = *(void **)v1;
      if ( (unsigned __int64)(*(_QWORD *)v1 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v6);
        SetLastError(LastError);
      }
      *(_QWORD *)v1 = Thread;
      Thread = 0LL;
    }
    result = (_DWORD)Thread - 1;
    if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      result = CloseHandle(Thread);
    if ( !*(_QWORD *)v1 )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x2CE,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        v5);
      JUMPOUT(0x1800C3ED4LL);
    }
  }
  else
  {
    result = SetEvent(lpParameter[16]);
    if ( !result )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x86F,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v3);
      __debugbreak();
    }
  }
  return result;
}
