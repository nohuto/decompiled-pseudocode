/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C0040A90
 * Callers:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0035590 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7B8 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C003D7F8 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE70 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall prfntDeactivateEudcRFONTs(_QWORD *a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _FONTHASH **v5; // rdi
  unsigned int v6; // r12d
  struct _FONTHASH *i; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  struct RFONT *v19; // [rsp+88h] [rbp+48h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v15 = 0LL;
  v18 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v17 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v5 = gpPFTPublic;
  v6 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    do
    {
      for ( i = v5[v6 + 5]; i; i = (struct _FONTHASH *)*((_QWORD *)i + 1) )
      {
        if ( (*((_DWORD *)i + 13) & 8) != 0 )
        {
          v9 = *((_QWORD *)i + 9);
          if ( v9 )
          {
            v16 = 0LL;
            do
            {
              v10 = *(_QWORD *)(v9 + 112);
              if ( v10 == *a1 || v10 == a1[1] )
              {
                v11 = *(_QWORD *)(v9 + 96);
                v20 = v11;
                v21 = v9;
                if ( *(_DWORD *)(v9 + 492) )
                {
                  v19 = PDEVOBJ::prfntActive((PDEVOBJ *)&v20);
                  RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)&v19, 1);
                  PDEVOBJ::prfntActive((PDEVOBJ *)&v20, v19);
                }
                else
                {
                  v19 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v20);
                  RFONTOBJ::vRemove((__int64)&v21, (unsigned __int64 *)&v19, 1);
                  PDEVOBJ::prfntInactive((PDEVOBJ *)&v20, v19);
                  v12 = PDEVOBJ::cInactive((PDEVOBJ *)&v20) - 1;
                  if ( (*(_DWORD *)(v11 + 32) & 0x800000) != 0 )
                    *(_DWORD *)(*(_QWORD *)(v11 + 3536) + 1544LL) = v12;
                  else
                    *(_DWORD *)(v11 + 1544) = v12;
                }
                RFONTOBJ::vInsert(&v21, &v15, 1);
                v21 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21, v13, v14);
              }
              v9 = *(_QWORD *)(v9 + 520);
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16, v3, v4);
            }
            while ( v9 );
          }
        }
      }
      ++v6;
    }
    while ( v6 < *((_DWORD *)v5 + 6) );
    v2 = v15;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  return v2;
}
