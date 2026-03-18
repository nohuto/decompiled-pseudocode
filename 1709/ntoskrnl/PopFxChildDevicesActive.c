/*
 * XREFs of PopFxChildDevicesActive @ 0x1406F8134
 * Callers:
 *     PopDripsWatchdogFetchDeviceBlockers @ 0x14070A778 (PopDripsWatchdogFetchDeviceBlockers.c)
 * Callees:
 *     IoControlPnpDeviceActionQueue @ 0x14012914C (IoControlPnpDeviceActionQueue.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

SIZE_T __fastcall PopFxChildDevicesActive(__int64 a1, SIZE_T *a2, _DWORD *a3)
{
  SIZE_T v3; // rdi
  __int64 v4; // rbx
  __int64 *v7; // rcx
  __int64 *v8; // rax
  unsigned int v9; // r8d
  int v10; // ecx
  unsigned int v11; // r9d
  int v12; // r10d
  int v13; // ecx
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  SIZE_T result; // rax
  SIZE_T v17; // r8
  SIZE_T v18; // rdx
  SIZE_T v19; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  LODWORD(v4) = 0;
  *a2 = 0LL;
  *a3 = 0;
  IoControlPnpDeviceActionQueue(1);
  v7 = *(__int64 **)(v3 + 8);
  v8 = (__int64 *)v3;
  while ( v7 )
  {
    v8 = v7;
    v7 = (__int64 *)v7[1];
  }
  if ( v8 != (__int64 *)v3 )
  {
    v9 = 1;
    do
    {
      v10 = *((_DWORD *)v8 + 74);
      v11 = v9;
      v12 = v4;
      if ( (v10 & 0x10) == 0 && *((_DWORD *)v8 + 35) == 1 )
      {
        v13 = v10 | 0x20;
        *((_DWORD *)v8 + 74) = v13;
        if ( v9 < (unsigned int)v4 )
          return IoControlPnpDeviceActionQueue(0);
        LODWORD(v4) = v4 + 1;
        ++v9;
        v14 = v8;
        if ( v8 != (__int64 *)v3 )
        {
          while ( *((_DWORD *)v14 + 35) == 1 )
          {
            v14 = (__int64 *)v14[2];
            if ( v14 == (__int64 *)v3 )
              goto LABEL_14;
          }
          LODWORD(v4) = v12;
          *((_DWORD *)v8 + 74) = v13 & 0xFFFFFFDF;
          v9 = v11;
        }
      }
LABEL_14:
      v15 = (__int64 *)*v8;
      if ( *v8 )
      {
        do
        {
          v8 = v15;
          v15 = (__int64 *)v15[1];
        }
        while ( v15 );
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( v8 != (__int64 *)v3 );
    if ( (_DWORD)v4 )
    {
      result = 728LL * (unsigned int)v4;
      if ( !is_mul_ok(0x2D8uLL, (unsigned int)v4) )
        goto LABEL_33;
      result = (SIZE_T)ExAllocatePoolWithTag(PagedPool, result, 0x4D584650u);
      *a2 = result;
      v17 = result;
      if ( !result )
        goto LABEL_33;
      v18 = *(_QWORD *)(v3 + 8);
      v19 = v3;
      *a3 = v4;
      v4 = 0LL;
      while ( v18 )
      {
        v19 = v18;
        v18 = *(_QWORD *)(v18 + 8);
      }
      if ( v19 != v3 )
      {
        do
        {
          if ( (*(_DWORD *)(v19 + 296) & 0x20) != 0 )
          {
            *(_QWORD *)(v17 + 8 * v4) = v19;
            v4 = (unsigned int)(v4 + 1);
          }
          result = *(_QWORD *)v19;
          if ( *(_QWORD *)v19 )
          {
            do
            {
              v19 = result;
              result = *(_QWORD *)(result + 8);
            }
            while ( result );
          }
          else
          {
            v19 = *(_QWORD *)(v19 + 16);
          }
        }
        while ( v19 != v3 );
LABEL_33:
        if ( (_DWORD)v4 )
          return result;
      }
    }
  }
  return IoControlPnpDeviceActionQueue(0);
}
