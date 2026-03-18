/*
 * XREFs of AAHalftoneBitmap @ 0x1C0033238
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C0032F6C (HT_HalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C0007958 (SetGrayColorTable.c)
 *     ValidateHTSI @ 0x1C0033538 (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C003390C (CreateDyesColorMappingTable.c)
 *     SetupAAHeader @ 0x1C0035E8C (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C00A27B8 (InitializeFUDI.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GetDstBFInfo @ 0x1C023CCD4 (GetDstBFInfo.c)
 *     FindBGRMapCache @ 0x1C023DB4C (FindBGRMapCache.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned int v8; // ebx
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // xmm1
  unsigned __int64 v16; // r8
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v18)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v19; // zf
  int v21; // eax
  unsigned __int8 v22; // si
  __int64 v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int64 v27; // rdx
  __int128 v28; // xmm1
  __int64 v29; // rdx
  __int128 v30; // xmm1
  bool v31; // zf
  __int64 (__fastcall *v32)(int, int, int, int, __int64, __int64, __int64, int); // rax
  char v33; // cl
  bool v34; // zf
  __int64 (__fastcall *v35)(int, int, int, int, __int64, __int64, __int64, int, __int64); // rax
  __int64 v36; // r11
  void *v37; // r10
  unsigned __int8 *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  void *v41; // [rsp+20h] [rbp-28h]
  __int64 v42; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall *v43[3])(_QWORD); // [rsp+30h] [rbp-18h] BYREF
  unsigned __int8 v44; // [rsp+90h] [rbp+48h]
  int DyesColorMappingTable; // [rsp+98h] [rbp+50h]
  int v46; // [rsp+A8h] [rbp+60h]

  v1 = *a1;
  v2 = a1[1];
  v4 = a1[6];
  v5 = ValidateHTSI(a1, 0LL);
  if ( v5 >= 0 )
  {
    v5 = ValidateHTSI(a1, 1LL);
    if ( v5 >= 0 )
    {
      v5 = ValidateHTSI(a1, 2LL);
      if ( v5 >= 0 )
      {
        v5 = SetupAAHeader(a1, v1, v4, v43);
        if ( v5 > 0 )
        {
          DyesColorMappingTable = CreateDyesColorMappingTable(a1);
          v7 = DyesColorMappingTable;
          if ( DyesColorMappingTable <= 0 )
          {
LABEL_100:
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
LABEL_31:
            EngFreeMem(*(PVOID *)(v4 + 304));
            EngFreeMem(*(PVOID *)(v4 + 312));
            return v7;
          }
          v8 = *(_DWORD *)(v4 + 444);
          v9 = *(_DWORD *)v4;
          v44 = *(_BYTE *)(v2 + 31);
          v42 = *(_QWORD *)(v4 + 136);
          v46 = 1;
          v10 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
          v41 = 0LL;
          v11 = *(_DWORD *)(v2 + 56) & 0x2000000;
          if ( v11 )
            v41 = (void *)(v1 + 548);
          if ( v9 < 0 )
          {
            v46 = 0;
            if ( (v9 & 0x800) != 0 )
            {
              v23 = *(_QWORD *)(v1 + 7064);
              *(_QWORD *)(v4 + 336) = v23;
              if ( (v9 & 0x1000) != 0 )
                *(_QWORD *)(v4 + 336) = v23 + 768;
            }
          }
          else
          {
            v12 = *(_QWORD *)(v4 + 376);
            v13 = v1 + 856;
            v14 = 24LL;
            do
            {
              *(_OWORD *)v12 = *(_OWORD *)v13;
              *(_OWORD *)(v12 + 16) = *(_OWORD *)(v13 + 16);
              *(_OWORD *)(v12 + 32) = *(_OWORD *)(v13 + 32);
              *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
              *(_OWORD *)(v12 + 64) = *(_OWORD *)(v13 + 64);
              *(_OWORD *)(v12 + 80) = *(_OWORD *)(v13 + 80);
              *(_OWORD *)(v12 + 96) = *(_OWORD *)(v13 + 96);
              v12 += 128LL;
              v15 = *(_OWORD *)(v13 + 112);
              v13 += 128LL;
              *(_OWORD *)(v12 - 16) = v15;
              --v14;
            }
            while ( v14 );
            *(_OWORD *)v12 = *(_OWORD *)v13;
            *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 16);
            *(_DWORD *)(v12 + 24) = *(_DWORD *)(v13 + 24);
            if ( (v9 & 0x800) != 0 )
            {
              v24 = *(_OWORD **)(v1 + 7064);
              v25 = *(_OWORD **)(v4 + 336);
              if ( (v9 & 0x1000) != 0 )
              {
                v26 = v24 + 48;
                v27 = 16LL;
                do
                {
                  *v25 = *v26;
                  v25[1] = v26[1];
                  v25[2] = v26[2];
                  v25[3] = v26[3];
                  v25[4] = v26[4];
                  v25[5] = v26[5];
                  v25[6] = v26[6];
                  v25 += 8;
                  v28 = v26[7];
                  v26 += 8;
                  *(v25 - 1) = v28;
                  --v27;
                }
                while ( v27 );
              }
              else
              {
                v29 = 6LL;
                do
                {
                  *v25 = *v24;
                  v25[1] = v24[1];
                  v25[2] = v24[2];
                  v25[3] = v24[3];
                  v25[4] = v24[4];
                  v25[5] = v24[5];
                  v25[6] = v24[6];
                  v25 += 8;
                  v30 = v24[7];
                  v24 += 8;
                  *(v25 - 1) = v30;
                  --v29;
                }
                while ( v29 );
              }
            }
            EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
          }
          if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
            SetGrayColorTable(*(_OWORD **)(v4 + 384), v4 + 8);
          if ( *(_DWORD *)(v4 + 528) )
            InitializeFUDI(v4);
          v16 = v44;
          *(_QWORD *)(v4 + 560) -= 4LL;
          if ( v44 > 0xF9u )
          {
            if ( v44 == 250 )
            {
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332;
              v34 = v11 == 0;
              v35 = OutputAATo8BPP_B332_XLATE;
LABEL_95:
              if ( !v34 )
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v35;
              goto LABEL_40;
            }
            if ( v44 == 251 )
            {
              BYTE1(v41) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
LABEL_40:
              v7 = DyesColorMappingTable;
              goto LABEL_25;
            }
            if ( v44 <= 0xFBu )
              goto LABEL_92;
            if ( v44 <= 0xFDu )
            {
              if ( (v42 & 3) != 0 )
              {
                LOBYTE(v41) = 1;
                LOBYTE(v10) = v10 - 1;
              }
              if ( (v10 & 1) != 0 )
              {
                *(_QWORD *)(v4 + 568) -= 4LL;
                BYTE3(v41) = 1;
              }
              if ( (_BYTE)v8 )
              {
                v7 = DyesColorMappingTable;
                if ( (_BYTE)v8 != 4 )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
                  goto LABEL_25;
                }
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
                v19 = v44 == 0xFD;
                v18 = OutputAATo16BPP_565_BGR;
                goto LABEL_23;
              }
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v31 = v44 == 0xFD;
              v32 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
              goto LABEL_57;
            }
            if ( v44 == 254 )
            {
              v36 = a1[7];
              v16 = *(_QWORD *)(v4 + 400);
              if ( v36 )
              {
                v37 = *(void **)(v4 + 400);
                if ( v16 )
                {
                  v38 = (unsigned __int8 *)&VGA256Xlate;
                  LODWORD(v6) = 366;
                  do
                  {
                    v39 = *v38++;
                    *(_BYTE *)v16++ = *(_BYTE *)(v39 + v36);
                    v19 = (_DWORD)v6 == 1;
                    v6 = (unsigned int)(v6 - 1);
                  }
                  while ( !v19 );
                }
              }
              else
              {
                v37 = &VGA256Xlate;
              }
              LOBYTE(v16) = v44;
              v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
              v41 = v37;
              goto LABEL_40;
            }
          }
          else
          {
            if ( v44 >= 0xF8u )
              goto LABEL_64;
            switch ( v44 )
            {
              case 5u:
                v7 = DyesColorMappingTable;
                *(_WORD *)((char *)&v41 + 1) = v8 >> 8;
                BYTE3(v41) = HIBYTE(v8);
                LOBYTE(v41) = v8;
                if ( !(_BYTE)v8 )
                {
                  v17 = OutputAATo24BPP_RGB;
                  goto LABEL_25;
                }
                v17 = OutputAATo24BPP_BGR;
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
                goto LABEL_22;
              case 6u:
                v7 = DyesColorMappingTable;
                *(_WORD *)((char *)&v41 + 1) = v8 >> 8;
                BYTE3(v41) = HIBYTE(v8);
                LOBYTE(v41) = v8;
                if ( !(_BYTE)v8 )
                {
                  v17 = OutputAATo32BPP_RGB;
                  goto LABEL_25;
                }
                v17 = OutputAATo32BPP_BGR;
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
LABEL_22:
                v19 = (_BYTE)v8 == 4;
LABEL_23:
                if ( !v19 )
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v18;
LABEL_25:
                *(_QWORD *)(v4 + 272) = v17;
                if ( v17 )
                {
                  v19 = (*(_DWORD *)v4 & 0x800) == 0;
                  *(_QWORD *)(v4 + 280) = v41;
                  if ( !v19 )
                  {
                    LOBYTE(v6) = v8;
                    GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v16, v6);
                  }
                  v7 = v43[0](v4);
                }
                if ( (v9 & 0x18) != 0 )
                {
                  v40 = *(_QWORD *)(v4 + 392);
                  if ( v40 )
                    FindBGRMapCache(v40, 0LL);
                }
                if ( v46 )
                  goto LABEL_31;
                goto LABEL_100;
              case 1u:
                v21 = *(unsigned __int8 *)(v4 + 97);
                BYTE1(v41) = -((v9 & 4) == 0);
                if ( *(_BYTE *)(v4 + 97) )
                {
                  v33 = 8 - v21;
                  v10 -= 8 - v21;
                  if ( v10 < 0 )
                  {
                    v33 += v10;
                    BYTE2(v41) = -(char)v10;
                    LOBYTE(v10) = 0;
                  }
                  LOBYTE(v41) = v33;
                }
                v22 = v10 & 7;
                BYTE3(v41) = v22;
                if ( v22 )
                  *(_QWORD *)(v4 + 568) += -4LL * v22;
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
                goto LABEL_40;
            }
            if ( v44 != 2 )
            {
              if ( v44 > 0xF4u )
              {
                if ( v44 > 0xF6u )
                {
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
                  v31 = v11 == 0;
                  v32 = OutputAATo8BPP_K_B332;
LABEL_57:
                  if ( v31 )
                    v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))v32;
                  goto LABEL_40;
                }
LABEL_64:
                v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
                v41 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)(v4 + 376) + 16LL));
                if ( (unsigned __int8)(v44 + 8) > 1u )
                  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
                goto LABEL_40;
              }
LABEL_92:
              v17 = 0LL;
              v7 = -11;
              goto LABEL_25;
            }
          }
          BYTE1(v41) = (v9 & 4) == 0 ? 0x77 : 0;
          if ( *(_BYTE *)(v4 + 97) )
          {
            LOBYTE(v41) = 1;
            LOBYTE(v10) = v10 - 1;
          }
          if ( (v10 & 1) != 0 )
          {
            *(_QWORD *)(v4 + 568) -= 4LL;
            BYTE3(v41) = 1;
          }
          v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
          v34 = v44 == 2;
          v35 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, __int64))OutputAAToVGA16;
          goto LABEL_95;
        }
      }
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v1 + 8));
  return (unsigned int)v5;
}
