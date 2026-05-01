/*
 * XREFs of ?RmpCpuSetManagerAcquireSetsForAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KPEAU_RM_CPU_SET_REQUEST_INFORMATION@@@Z @ 0x18003683C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180036754 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall RmpCpuSetManagerAcquireSetsForAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_ALLOCATION *a2,
        __int64 a3,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a4)
{
  unsigned int i; // edx
  unsigned int v8; // r9d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  int v11; // r11d
  bool v12; // zf
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _WORD SystemInformation[88]; // [rsp+20h] [rbp-F8h] BYREF

  memset_0(SystemInformation, 0, 0xA8uLL);
  if ( (*((_BYTE *)a4 + 172) & 1) != 0
    && NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL) < 0 )
  {
    *((_DWORD *)a4 + 43) &= ~1u;
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( (i || *((_DWORD *)a4 + 42)) && (i != 1 || *((_DWORD *)a4 + 43)) )
    {
      v8 = 0;
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)((char *)a1 + v9 + 248);
        while ( 1 )
        {
          v11 = *((_DWORD *)a4 + 43);
          if ( (v11 & 2) != 0 )
          {
            v12 = !_BitScanForward64(&v13, v10);
          }
          else
          {
            v12 = !_BitScanReverse64(&v14, v10);
            v13 = (unsigned int)v14;
          }
          if ( v12 )
            break;
          v10 &= ~(1LL << v13);
          if ( i )
          {
            if ( i != 1
              || (v11 & 1) == 0
              || v8 >= SystemInformation[0]
              || (v15 = *(_QWORD *)&SystemInformation[v9 / 2 + 4], !_bittest64(&v15, v13)) )
            {
LABEL_23:
              *(_QWORD *)((char *)a1 + v9 + 248) &= ~(1LL << v13);
              *((_DWORD *)a1 + 113) |= 1u;
              --*((_DWORD *)a1 + 110);
              *(_QWORD *)((char *)a2 + v9 + 96) |= 1LL << v13;
              if ( ++*((_DWORD *)a2 + 64) == *(_DWORD *)a4 )
                return;
            }
          }
          else
          {
            if ( (*((_BYTE *)a4 + 168) & 1) == 0 )
              goto LABEL_23;
            v16 = *(_QWORD *)((char *)a4 + v9 + 8);
            if ( _bittest64(&v16, v13) )
              goto LABEL_23;
          }
        }
        ++v8;
        v9 += 8LL;
      }
      while ( v8 < 0x14 );
    }
  }
}
