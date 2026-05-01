/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180003BD0
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x1800036A0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003AC0 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2,
        __int64 a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ecx
  int v10; // ebx
  int v11; // ebx
  int v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF
  char v14; // [rsp+68h] [rbp+20h] BYREF
  int v15; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive((char *)this + 72, a2, a3);
  *((_DWORD *)this + 20) = GetCurrentThreadId();
  v5 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v5 >= 0 )
  {
    v12 = 8;
    v6 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v13, &v14, &v12);
    if ( v6 < 0 )
    {
      v5 = v6 | 0x10000000;
      goto LABEL_7;
    }
    v7 = v15;
    if ( (unsigned int)QuirkIsEnabled(1114131LL) && v7 >= 4 )
    {
      v8 = 3;
      v7 = 3;
    }
    else
    {
      if ( v7 == 1 )
        goto LABEL_5;
      v8 = 3;
    }
    if ( v7 )
    {
      v10 = v7 - 2;
      if ( !v10 )
      {
        v8 = 1;
        goto LABEL_6;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v8 = 2;
        goto LABEL_6;
      }
      if ( v11 == 1 )
      {
LABEL_6:
        *(_DWORD *)a2 = v8;
        v5 = 0;
        goto LABEL_7;
      }
    }
LABEL_5:
    v8 = 0;
    goto LABEL_6;
  }
LABEL_7:
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v5;
}
