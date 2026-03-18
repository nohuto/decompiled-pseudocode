/*
 * XREFs of MiMapProcessExecutable @ 0x14045EF60
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiGetPdeAddress @ 0x1401322DC (MiGetPdeAddress.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInitializeUserNoAccess @ 0x14045BCF8 (MiInitializeUserNoAccess.c)
 *     MiCfgInitializeProcess @ 0x14045F104 (MiCfgInitializeProcess.c)
 *     PsMapSystemDlls @ 0x14045FCCC (PsMapSystemDlls.c)
 *     MmMapViewOfSection @ 0x140460870 (MmMapViewOfSection.c)
 *     MiSessionCreate @ 0x1405B4810 (MiSessionCreate.c)
 */

__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, unsigned int *a3, unsigned __int64 a4)
{
  int v6; // ebx
  __int64 result; // rax
  unsigned int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rcx
  int v12; // ebx
  BOOL v13; // r10d
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 *v15; // rdx
  int v16; // r9d
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  int v25; // eax
  unsigned __int64 v26; // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h] BYREF
  __int64 v28; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v29[3]; // [rsp+68h] [rbp-50h] BYREF

  v6 = a2;
  if ( (*(_DWORD *)(a2 + 56) & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(), (int)result >= 0) )
  {
    v9 = *a3;
    v27 = 0LL;
    v26 = 0LL;
    v28 = 0LL;
    v10 = MmMapViewOfSection(
            v6,
            a1,
            (unsigned int)&v26,
            0,
            0LL,
            (__int64)&v28,
            (__int64)&v27,
            1,
            (unsigned __int8)(v9 & 0x10) << 25,
            4);
    v11 = v26;
    v12 = v10;
    *(_QWORD *)(a1 + 960) = v26;
    if ( v10 >= 0 )
    {
      v13 = 0;
      if ( (*a3 & 0x10) != 0 )
      {
        PdeAddress = MiGetPdeAddress(v11);
        v15 = v29;
        do
        {
          *v15 = PdeAddress;
          PdeAddress = MiGetPteAddress(PdeAddress);
          v15 = (unsigned __int64 *)(v18 + 8);
        }
        while ( v19 != 1 );
        while ( 1 )
        {
          v17 = (unsigned int)(v17 - 1);
          v20 = (__int64 *)v29[v17];
          v21 = *v20;
          if ( (unsigned __int64)v20 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
            LOBYTE(v21) = MiReadPteShadow();
          if ( (v21 & 1) == 0 )
          {
LABEL_15:
            *a3 = v16 & 0xFFFFFFEF;
            goto LABEL_16;
          }
          if ( (v21 & 0x80u) != 0LL )
            break;
          if ( !(_DWORD)v17 )
            goto LABEL_15;
        }
        v13 = (v16 & 0x20) != 0;
      }
LABEL_16:
      v22 = PsMapSystemDlls(a1, v13);
      if ( v22 < 0 )
        v12 = v22;
      if ( v12 >= 0 )
      {
        v23 = MiCfgInitializeProcess(a1);
        if ( v23 >= 0 )
        {
          if ( a4 )
          {
            v25 = MiInitializeUserNoAccess(a1, a4, v24);
            if ( v25 < 0 )
              return (unsigned int)v25;
          }
        }
        else
        {
          return (unsigned int)v23;
        }
      }
    }
    return (unsigned int)v12;
  }
  return result;
}
