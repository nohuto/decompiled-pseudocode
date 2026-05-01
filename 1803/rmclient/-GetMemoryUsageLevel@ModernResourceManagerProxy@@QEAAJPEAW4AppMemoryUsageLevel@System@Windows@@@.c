/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180003498
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180003090 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003390 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2,
        __int64 a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int IsEnabled; // eax
  int v9; // ecx
  int v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF
  int v14; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive((char *)this + 72, a2, a3);
  *((_DWORD *)this + 20) = GetCurrentThreadId();
  v5 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v5 >= 0 )
  {
    v11 = 8;
    v6 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v12, &v13, &v11);
    if ( v6 < 0 )
    {
      v5 = v6 | 0x10000000;
      goto LABEL_7;
    }
    v7 = v14;
    IsEnabled = QuirkIsEnabled(1114131LL);
    v9 = 3;
    if ( IsEnabled && v7 >= 4 )
      v7 = 3;
    if ( v7 > 1 )
    {
      switch ( v7 )
      {
        case 2:
          v9 = 1;
          goto LABEL_6;
        case 3:
          v9 = 2;
          goto LABEL_6;
        case 4:
          goto LABEL_6;
      }
    }
    v9 = 0;
LABEL_6:
    *(_DWORD *)a2 = v9;
    v5 = 0;
  }
LABEL_7:
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v5;
}
