/*
 * XREFs of ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C024F2F0
 * Callers:
 *     NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0251160 (NtGdiDdDDISharedPrimaryLockNotification.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0032418 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C024FC94 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 */

__int64 __fastcall DxLddmSharedPrimaryLockNotification(struct _LUID a1, int a2, const struct _RECTL *a3)
{
  DWORD LowPart; // ebx
  unsigned int v4; // edi
  int v5; // r13d
  int v7; // esi
  DYNAMICMODECHANGESHARELOCK *v8; // rcx
  HDEV i; // rcx
  struct _LUID *v10; // rax
  HDEV v11; // r12
  unsigned int CurrentProcessId; // eax
  LONG top; // ecx
  unsigned int v14; // r9d
  LONG right; // r9d
  struct tagSIZE v16; // rax
  int v17; // r9d
  struct tagSIZE v18; // rax
  int v19; // r10d
  _DWORD *ProcessEntry; // rsi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  struct _RECTL *v24; // rdx
  LONG v25; // eax
  LONG v26; // eax
  LONG bottom; // eax
  HDEV v28; // rax
  HDEV v29; // r15
  HDEV v31; // [rsp+20h] [rbp-60h] BYREF
  char v32[4]; // [rsp+28h] [rbp-58h] BYREF
  int v33; // [rsp+2Ch] [rbp-54h]
  __int64 v34; // [rsp+30h] [rbp-50h]
  struct _LUID v35; // [rsp+38h] [rbp-48h]
  __int64 v36; // [rsp+60h] [rbp-20h] BYREF
  int v37; // [rsp+68h] [rbp-18h]
  int v38; // [rsp+6Ch] [rbp-14h]

  LowPart = a1.LowPart;
  v35 = a1;
  v4 = 0;
  v33 = a2;
  v5 = 0;
  v7 = a2;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v32);
  if ( !g_pDwmState )
  {
    for ( i = 0LL; ; i = v29 )
    {
      v28 = (HDEV)hdevEnumerate(i);
      v29 = v28;
      if ( !v28 )
        break;
      v31 = v28;
      if ( ((_DWORD)v28[8] & 0x20400) == 0 )
      {
        if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v31) )
        {
          if ( LowPart == PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31)->LowPart )
          {
            v10 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v31);
            if ( v35.HighPart == v10->HighPart && *(_DWORD *)(*((_QWORD *)v31 + 324) + 272LL) == v7 )
            {
              GreLockVisRgn(v31);
              GreLockSprite(v31);
              GreLockDisplayDevice(v31);
              v11 = v31 + 660;
              CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
              top = a3->top;
              v34 = CurrentProcessId & 0xFFFFFFFC;
              if ( top || a3->left || a3->right || a3->bottom )
              {
                right = a3->right;
                if ( right <= a3->left
                  || a3->bottom <= top
                  || a3->left < 0
                  || right < 0
                  || (v16 = PDEVOBJ::sizl((PDEVOBJ *)&v31), v17 > *(_DWORD *)v16.cx)
                  || (v18 = PDEVOBJ::sizl((PDEVOBJ *)&v31), v19 > *(_DWORD *)(*(_QWORD *)&v18 + 4LL)) )
                {
                  v5 = -1073741811;
                }
                v14 = v34;
              }
              else
              {
                v36 = 0LL;
                v37 = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v31).cx;
                a3 = (const struct _RECTL *)&v36;
                v38 = *(_DWORD *)(*(_QWORD *)&PDEVOBJ::sizl((PDEVOBJ *)&v31) + 4LL);
              }
              if ( v5 >= 0 )
              {
                ProcessEntry = (_DWORD *)DxLddmFindProcessEntry(v11, v14);
                if ( !ProcessEntry )
                {
                  v21 = PALLOCMEM2(0x30uLL, 1684305988LL, 1);
                  if ( v21 )
                  {
                    v21[4] = v34;
                    v22 = *(_QWORD *)v11;
                    if ( *(HDEV *)(*(_QWORD *)v11 + 8LL) != v11 )
                      __fastfail(3u);
                    *(_QWORD *)v21 = v22;
                    ProcessEntry = v21;
                    *((_QWORD *)v21 + 1) = v11;
                    *(_QWORD *)(v22 + 8) = v21;
                    *(_QWORD *)v11 = v21;
                  }
                  else
                  {
                    v5 = -1073741801;
                  }
                }
                if ( v5 >= 0 )
                {
                  ++ProcessEntry[5];
                  ++*((_DWORD *)v31 + 664);
                  v23 = ProcessEntry[6];
                  if ( v23 != -1 )
                    ProcessEntry[6] = v23 + 1;
                  v24 = (struct _RECTL *)(ProcessEntry + 7);
                  if ( ProcessEntry[5] == 1 )
                  {
                    *v24 = *a3;
                    ProcessEntry[11] = giVisRgnUniqueness;
                  }
                  else
                  {
                    if ( a3->left < v24->left )
                      v24->left = a3->left;
                    v25 = a3->top;
                    if ( v25 < ProcessEntry[8] )
                      ProcessEntry[8] = v25;
                    v26 = a3->right;
                    if ( v26 > ProcessEntry[9] )
                      ProcessEntry[9] = v26;
                    bottom = a3->bottom;
                    if ( bottom > ProcessEntry[10] )
                      ProcessEntry[10] = bottom;
                  }
                  bSpTearDownSprites(v31, v24, 1);
                  PDEVOBJ::vSync(
                    (PDEVOBJ *)&v31,
                    (struct _SURFOBJ *)((*((_QWORD *)v31 + 321) + 24LL) & -(__int64)(*((_QWORD *)v31 + 321) != 0LL)),
                    0LL,
                    6u);
                }
                v7 = v33;
              }
              GreUnlockDisplayDevice(v31);
              GreUnlockSprite(v31);
              GreUnlockVisRgn(v31);
            }
          }
        }
      }
    }
    v4 = v5;
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v8);
  return v4;
}
