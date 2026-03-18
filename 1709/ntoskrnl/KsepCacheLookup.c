/*
 * XREFs of KsepCacheLookup @ 0x140551D9C
 * Callers:
 *     KsepDbCacheQueryDevice @ 0x1404F54EC (KsepDbCacheQueryDevice.c)
 *     KseAddHardwareId @ 0x140551E88 (KseAddHardwareId.c)
 *     KseQueryDeviceDataList @ 0x1406DA8D0 (KseQueryDeviceDataList.c)
 *     KsepDbCacheInsertDevice @ 0x1406DAC58 (KsepDbCacheInsertDevice.c)
 *     KseLookupHardwareId @ 0x1406DB518 (KseLookupHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall KsepCacheLookup(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD **v5; // rdx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *result; // rax

  v4 = (*(__int64 (__fastcall **)(__int64))(a1 + 80))(a2);
  v5 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12)));
  v6 = *v5;
  if ( *v5 == v5 )
  {
LABEL_9:
    ++*(_DWORD *)(a1 + 52);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = v6 - 1;
      if ( v4 == *((_DWORD *)v6 - 2) )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD *))(a1 + 72))(a2, v6 - 1) )
          break;
      }
      v6 = (_QWORD *)*v6;
      if ( v6 == (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (v4 % *(_DWORD *)(a1 + 12))) )
        goto LABEL_9;
    }
    v8 = v7 + 3;
    v9 = v7[3];
    if ( *(_QWORD **)(v9 + 8) != v7 + 3 || (v10 = (_QWORD *)v7[4], (_QWORD *)*v10 != v8) )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = *(_QWORD **)(a1 + 40);
    if ( *v11 != a1 + 32 )
      __fastfail(3u);
    *v8 = a1 + 32;
    v7[4] = v11;
    *v11 = v8;
    *(_QWORD *)(a1 + 40) = v8;
    result = v6 - 1;
    ++*(_DWORD *)(a1 + 48);
  }
  return result;
}
