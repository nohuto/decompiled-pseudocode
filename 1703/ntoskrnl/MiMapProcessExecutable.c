/*
 * XREFs of MiMapProcessExecutable @ 0x14049A420
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14049DBB4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetPdeAddress @ 0x14006B954 (MiGetPdeAddress.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeUserNoAccess @ 0x14044D3BC (MiInitializeUserNoAccess.c)
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x14049BFFC (PsMapSystemDlls.c)
 *     MmMapViewOfSection @ 0x14049C1F0 (MmMapViewOfSection.c)
 *     MiSessionCreate @ 0x14057DF80 (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4)
{
  int v6; // ebx
  unsigned int v8; // eax
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ebx
  BOOL v12; // r10d
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // eax
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 *v19; // rdx
  int v20; // r11d
  __int64 v21; // rdx
  __int64 v22; // r8
  char v23; // al
  int v24; // r9d
  unsigned __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  __int64 v26; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-50h] BYREF

  v6 = a2;
  if ( (*(_DWORD *)(a2 + 56) & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(), (int)result >= 0) )
  {
    v8 = *a3;
    v26 = 0LL;
    v25 = 0LL;
    v27 = 0LL;
    v9 = MmMapViewOfSection(
           v6,
           a1,
           (unsigned int)&v25,
           0,
           0LL,
           (__int64)&v27,
           (__int64)&v26,
           1,
           (unsigned __int8)(v8 & 0x10) << 25,
           4);
    v10 = v25;
    v11 = v9;
    *(_QWORD *)(a1 + 960) = v25;
    if ( v9 >= 0 )
    {
      v12 = 0;
      if ( (*a3 & 0x10) != 0 )
      {
        PdeAddress = MiGetPdeAddress(v10);
        v19 = v28;
        do
        {
          *v19 = PdeAddress;
          PdeAddress = MiGetPteAddress(PdeAddress);
          v19 = (unsigned __int64 *)(v21 + 8);
        }
        while ( v22 != 1 );
        while ( 1 )
        {
          v23 = MI_READ_PTE_LOCK_FREE(v28[v20 - 1]);
          if ( (v23 & 1) == 0 )
          {
LABEL_23:
            *a3 = v24 & 0xFFFFFFEF;
            goto LABEL_5;
          }
          if ( v23 < 0 )
            break;
          if ( !v20 )
            goto LABEL_23;
        }
        v12 = (v24 & 0x20) != 0;
      }
LABEL_5:
      v13 = PsMapSystemDlls(a1, v12);
      if ( v13 < 0 )
        v11 = v13;
      if ( v11 >= 0 )
      {
        v14 = MiCfgInitializeProcess(a1);
        if ( v14 < 0 )
        {
          return (unsigned int)v14;
        }
        else if ( a4 )
        {
          v17 = MiInitializeUserNoAccess(a1, a4, v15);
          if ( v17 < 0 )
            return (unsigned int)v17;
        }
      }
    }
    return (unsigned int)v11;
  }
  return result;
}
