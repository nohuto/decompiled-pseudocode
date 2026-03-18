/*
 * XREFs of _SetCursorIconData @ 0x1C0098908
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0098670 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C01409BC (_DuplicateCursor.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0098230 (_GetCurrentLogicalCursorThread.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0099310 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     GreDereferenceObject @ 0x1C00E3F0C (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C010FDB4 (GreReferenceObject.c)
 *     AllocateUnicodeString @ 0x1C0111828 (AllocateUnicodeString.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, size_t Size)
{
  __int64 v7; // r13
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // eax
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // esi
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  int v33; // eax
  int v34; // esi
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  HBRUSH v44; // rcx
  HBITMAP v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rax
  __int64 v51; // rcx
  __int128 v52; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+40h] [rbp-98h] BYREF
  _DWORD v54[12]; // [rsp+50h] [rbp-88h] BYREF
  _DWORD v55[22]; // [rsp+80h] [rbp-58h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(v54, 0, 0x20uLL);
  memset(v55, 0, 0x20uLL);
  v13 = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF;
  *(_DWORD *)(a1 + 80) = v13;
  v14 = v13 | *(_DWORD *)(a4 + 24);
  if ( (*(_DWORD *)(a4 + 24) & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( *(_WORD *)a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString(a1 + 56, a3) )
    {
      if ( (v14 & 8) == 0 )
      {
        v15 = *(_QWORD *)(a4 + 32);
        if ( v15 )
          GreDeleteObject(v15);
        v16 = *(_QWORD *)(a4 + 40);
        if ( v16 )
          GreDeleteObject(v16);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_DWORD *)(a1 + 56) = 0;
      return 0LL;
    }
    v7 = a2;
  }
  else
  {
    *(_OWORD *)(a1 + 56) = *a3;
  }
  if ( *(_QWORD *)(v7 + 8) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v52);
    *(_WORD *)(a1 + 72) = RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v7 + 8)) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v52);
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v14 & 8) == 0 )
      {
        v17 = *(_QWORD *)(a4 + 32);
        if ( v17 )
          GreDeleteObject(v17);
        v18 = *(_QWORD *)(a4 + 40);
        if ( v18 )
          GreDeleteObject(v18);
      }
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64), v10, v11);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      return 0LL;
    }
  }
  if ( (v14 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v9 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v9 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64), v10, v11);
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v19 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v19 )
      {
        UserDeleteAtom(v19);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  v20 = (unsigned int)(*(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24));
  *(_DWORD *)(a1 + 80) = v20;
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  *(_DWORD *)(a1 + 76) = *(unsigned __int16 *)(gpsi + 9976LL);
  if ( (v20 & 8) == 0 )
  {
    v39 = *(_QWORD *)(GetCurrentLogicalCursorThread(gpsi, v20, v11, v12) + 400);
    *(_QWORD *)(a4 + 48) = 0LL;
    v52 = 0uLL;
    *(_OWORD *)(a4 + 56) = 0uLL;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    v40 = *(_QWORD *)(a4 + 32);
    if ( v40 && (int)GreReferenceObject(v40) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 32));
      v41 = *(_QWORD *)(a4 + 40);
      if ( v41 )
        GreDeleteObject(v41);
      return 0LL;
    }
    v42 = *(_QWORD *)(a4 + 40);
    if ( v42 && (int)GreReferenceObject(v42) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 40));
      v43 = *(_QWORD *)(a4 + 32);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 140) )
      {
        if ( *(_DWORD *)(a1 + 144) )
        {
          v44 = *(HBRUSH *)(a4 + 32);
          if ( v44 )
          {
            if ( !*(_QWORD *)(a4 + 40)
              || (unsigned int)GreExtGetObjectW(v44, 32LL, (char *)v54)
              && (unsigned int)GreExtGetObjectW(*(HBRUSH *)(a4 + 40), 32LL, (char *)v55)
              && (v55[2] == v54[2] >> 1 || v55[2] == v54[2])
              && v55[1] >= v54[1] )
            {
              *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 32);
              v45 = *(HBITMAP *)(a4 + 40);
              *(_QWORD *)(a1 + 96) = v45;
              *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v45);
              GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
              GreIncQuotaCount(v39);
              v46 = *(_QWORD *)(a1 + 96);
              if ( v46 )
              {
                GreSetBitmapOwner(v46, 0LL);
                GreIncQuotaCount(v39);
              }
              v47 = *(_QWORD *)(a1 + 128);
              if ( v47 )
              {
                GreSetBitmapOwner(v47, 0LL);
                GreIncQuotaCount(v39);
              }
              goto LABEL_80;
            }
          }
        }
      }
      UserSetLastError(87LL, v38);
      v51 = *(_QWORD *)(a4 + 32);
      if ( v51 )
        GreDereferenceObject(v51, 0LL);
      v43 = *(_QWORD *)(a4 + 40);
    }
    if ( v43 )
      GreDereferenceObject(v43, 0LL);
    return 0LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v9;
  memmove(v9, *(const void **)(a4 + 104), (unsigned int)Size);
  v21 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 104) = v21 + *(_QWORD *)(a4 + 112);
  v22 = v21 + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v22;
  v23 = 0;
  v24 = *(_DWORD *)(a1 + 92);
  if ( v24 > 0 )
  {
    v25 = *(_QWORD *)(a1 + 104);
    while ( *(int *)v25 >= 0 && *(_DWORD *)v25 < *(_DWORD *)(a1 + 88) )
    {
      ++v23;
      v25 += 4LL;
      if ( v23 >= v24 )
        goto LABEL_42;
    }
    goto LABEL_40;
  }
LABEL_42:
  v25 = 0LL;
  if ( v24 > 0 )
  {
    v27 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v27 + v22)) >= 6 )
        break;
      v25 = (unsigned int)(v25 + 1);
      v27 += 4LL;
    }
    while ( (int)v25 < v24 );
  }
  if ( (_DWORD)v25 != v24 )
  {
    v28 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        LOBYTE(v25) = 3;
        v30 = HMValidateHandle(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v29), v25);
        v32 = v30;
        if ( !v30 )
          break;
        v33 = *(_DWORD *)(v30 + 80);
        if ( (v33 & 8) != 0 || (v33 & 0x40) == 0 || PsGetCurrentProcess(v31, v25) != gpepCSRSS && !*(_QWORD *)(v32 + 24) )
          break;
        *(_QWORD *)(v29 + *(_QWORD *)(a1 + 96)) = 0LL;
        *(_QWORD *)&v52 = *(_QWORD *)(a1 + 96) + 8LL * v28;
        *((_QWORD *)&v52 + 1) = v32;
        v53 = v52;
        HMAssignmentLock(&v53);
        ++v28;
        v29 += 8LL;
        if ( v28 >= *(_DWORD *)(a1 + 88) )
          goto LABEL_80;
      }
      v34 = v28 - 1;
      if ( v34 >= 0 )
      {
        v35 = 8LL * v34;
        do
        {
          HMAssignmentUnlock(v35 + *(_QWORD *)(a1 + 96));
          v35 -= 8LL;
          --v34;
        }
        while ( v34 >= 0 );
      }
      v26 = 1402LL;
      goto LABEL_41;
    }
LABEL_80:
    *(_QWORD *)(a1 + 48) = a1;
    v48 = *(_DWORD *)(a1 + 80);
    if ( (v48 & 0x40) == 0 )
    {
      v49 = *(_QWORD *)(a1 + 24);
      if ( !v49 )
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
LABEL_85:
        *(_DWORD *)(a1 + 80) |= 0x100u;
        return 1LL;
      }
      if ( (v48 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v49 + 704);
        *(_QWORD *)(v49 + 704) = a1;
        goto LABEL_85;
      }
    }
    return 1LL;
  }
LABEL_40:
  v26 = 87LL;
LABEL_41:
  UserSetLastError(v26, v25);
  Win32FreePool(*(_QWORD *)(a1 + 96), v36, v37);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
