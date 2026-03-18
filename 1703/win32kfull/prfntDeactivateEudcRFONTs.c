/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C0008BFC
 * Callers:
 *     bUnloadEudcFont @ 0x1C0008B20 (bUnloadEudcFont.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0032694 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00326D4 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032DEC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032E14 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F678 (-vInsert@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 */

__int64 __fastcall prfntDeactivateEudcRFONTs(_QWORD *a1)
{
  __int64 v2; // rdi
  struct _FONTHASH **v3; // rbx
  unsigned int v4; // r15d
  struct _FONTHASH *i; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r11
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  struct RFONT *v15; // [rsp+88h] [rbp+48h] BYREF
  __int64 v16; // [rsp+90h] [rbp+50h] BYREF
  __int64 v17; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v13 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v3 = gpPFTPublic;
  v4 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    do
    {
      for ( i = v3[v4 + 5]; i; i = (struct _FONTHASH *)*((_QWORD *)i + 1) )
      {
        if ( (*((_DWORD *)i + 13) & 8) != 0 )
        {
          v7 = *((_QWORD *)i + 9);
          if ( v7 )
          {
            v12 = 0LL;
            do
            {
              v8 = *(_QWORD *)(v7 + 112);
              if ( v8 == *a1 || v8 == a1[1] )
              {
                v16 = *(_QWORD *)(v7 + 96);
                v17 = v7;
                if ( *(_DWORD *)(v7 + 492) )
                {
                  v15 = PDEVOBJ::prfntActive((PDEVOBJ *)&v16);
                  RFONTOBJ::vRemove(&v17, &v15, 1LL);
                  PDEVOBJ::prfntActive((PDEVOBJ *)&v16, v15);
                }
                else
                {
                  v15 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v16);
                  RFONTOBJ::vRemove(&v17, &v15, 1LL);
                  PDEVOBJ::prfntInactive((PDEVOBJ *)&v16, v15);
                  v9 = PDEVOBJ::cInactive((PDEVOBJ *)&v16) - 1;
                  if ( (*(_DWORD *)(v10 + 32) & 0x800000) != 0 )
                    *(_DWORD *)(*(_QWORD *)(v10 + 3536) + 1544LL) = v9;
                  else
                    *(_DWORD *)(v10 + 1544) = v9;
                }
                RFONTOBJ::vInsert(&v17, &v11, 1LL);
                v17 = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
              }
              v7 = *(_QWORD *)(v7 + 520);
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
            }
            while ( v7 );
          }
        }
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)v3 + 6) );
    v2 = v11;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  return v2;
}
