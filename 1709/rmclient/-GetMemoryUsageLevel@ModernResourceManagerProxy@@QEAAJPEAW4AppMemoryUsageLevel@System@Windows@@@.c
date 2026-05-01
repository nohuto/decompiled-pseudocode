/*
 * XREFs of ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180001A88
 * Callers:
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180001A40 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 * Callees:
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003C50 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 */

__int64 __fastcall ModernResourceManagerProxy::GetMemoryUsageLevel(
        ModernResourceManagerProxy *this,
        enum Windows::System::AppMemoryUsageLevel *a2)
{
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int IsEnabled; // eax
  int v8; // ecx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF
  char v12; // [rsp+68h] [rbp+20h] BYREF
  int v13; // [rsp+6Ch] [rbp+24h]

  RtlAcquireSRWLockExclusive((char *)this + 72);
  *((_DWORD *)this + 20) = GetCurrentThreadId();
  v4 = ModernResourceManagerProxy::RegisterWithServer(this);
  if ( v4 >= 0 )
  {
    v10 = 8;
    v5 = NtQueryWnfStateData((char *)this + 40, 0LL, 0LL, &v11, &v12, &v10);
    if ( v5 < 0 )
    {
      v4 = v5 | 0x10000000;
      goto LABEL_7;
    }
    v6 = v13;
    IsEnabled = QuirkIsEnabled(1114131LL);
    v8 = 3;
    if ( IsEnabled && v6 >= 4 )
      v6 = 3;
    if ( v6 > 1 )
    {
      switch ( v6 )
      {
        case 2:
          v8 = 1;
          goto LABEL_6;
        case 3:
          v8 = 2;
          goto LABEL_6;
        case 4:
          goto LABEL_6;
      }
    }
    v8 = 0;
LABEL_6:
    *(_DWORD *)a2 = v8;
    v4 = 0;
  }
LABEL_7:
  *((_DWORD *)this + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)this + 72);
  return (unsigned int)v4;
}
