/*
 * XREFs of _SetCursorIconData @ 0x1C0046B74
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C00468C0 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C0139CE0 (_DuplicateCursor.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0046620 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreReferenceObject @ 0x1C0105B20 (GreReferenceObject.c)
 *     AllocateUnicodeString @ 0x1C0106BB8 (AllocateUnicodeString.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, size_t Size)
{
  __int64 v7; // r13
  void *v9; // r15
  unsigned int v10; // eax
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // eax
  int v20; // ecx
  int *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // esi
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r14
  int v30; // eax
  int v31; // esi
  __int64 v32; // r14
  __int64 CurrentProcessWin32Process; // r14
  HSURF v34; // rcx
  __int64 v35; // rcx
  HSURF v36; // rcx
  HSURF v37; // rcx
  HBRUSH v38; // rcx
  HBRUSH v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rax
  HSURF v45; // rcx
  __int128 v46; // [rsp+30h] [rbp-A8h]
  __int128 v47; // [rsp+40h] [rbp-98h] BYREF
  _DWORD v48[12]; // [rsp+50h] [rbp-88h] BYREF
  _DWORD v49[22]; // [rsp+80h] [rbp-58h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(v48, 0, 0x20uLL);
  memset(v49, 0, 0x20uLL);
  v10 = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF;
  *(_DWORD *)(a1 + 80) = v10;
  v11 = v10 | *(_DWORD *)(a4 + 24);
  if ( (*(_DWORD *)(a4 + 24) & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( *(_WORD *)a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString(a1 + 56, a3) )
    {
      if ( (v11 & 8) == 0 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        if ( v12 )
          GreDeleteObject(v12);
        v13 = *(_QWORD *)(a4 + 40);
        if ( v13 )
          GreDeleteObject(v13);
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
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v47);
    if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v7 + 8)) < 0 )
      *(_WORD *)(a1 + 72) = 0;
    else
      *(_WORD *)(a1 + 72) = UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    if ( !(_BYTE)v47 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v47);
    }
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v11 & 8) == 0 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        if ( v14 )
          GreDeleteObject(v14);
        v15 = *(_QWORD *)(a4 + 40);
        if ( v15 )
          GreDeleteObject(v15);
      }
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      return 0LL;
    }
  }
  if ( (v11 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v9 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v9 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v16 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v16 )
      {
        UserDeleteAtom(v16);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  v17 = (unsigned int)(*(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24));
  *(_DWORD *)(a1 + 80) = v17;
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  *(_DWORD *)(a1 + 76) = *(unsigned __int16 *)(gpsi + 8680LL);
  if ( (v17 & 8) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gpsi, v17);
    *(_QWORD *)(a4 + 48) = 0LL;
    *(_OWORD *)(a4 + 56) = 0uLL;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    v34 = *(HSURF *)(a4 + 32);
    if ( v34 && (int)GreReferenceObject(v34) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 32));
      v35 = *(_QWORD *)(a4 + 40);
      if ( v35 )
        GreDeleteObject(v35);
      return 0LL;
    }
    v36 = *(HSURF *)(a4 + 40);
    if ( v36 && (int)GreReferenceObject(v36) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 40));
      v37 = *(HSURF *)(a4 + 32);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 140) )
      {
        if ( *(_DWORD *)(a1 + 144) )
        {
          v38 = *(HBRUSH *)(a4 + 32);
          if ( v38 )
          {
            if ( !*(_QWORD *)(a4 + 40)
              || (unsigned int)GreExtGetObjectW(v38, 32LL, (unsigned __int16 *)v48)
              && (unsigned int)GreExtGetObjectW(*(HBRUSH *)(a4 + 40), 32LL, (unsigned __int16 *)v49)
              && (v49[2] == v48[2] >> 1 || v49[2] == v48[2])
              && v49[1] >= v48[1] )
            {
              *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 32);
              v39 = *(HBRUSH *)(a4 + 40);
              *(_QWORD *)(a1 + 96) = v39;
              *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v39);
              GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
              GreIncQuotaCount(CurrentProcessWin32Process);
              v40 = *(_QWORD *)(a1 + 96);
              if ( v40 )
              {
                GreSetBitmapOwner(v40, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              v41 = *(_QWORD *)(a1 + 128);
              if ( v41 )
              {
                GreSetBitmapOwner(v41, 0LL);
                GreIncQuotaCount(CurrentProcessWin32Process);
              }
              goto LABEL_82;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v45 = *(HSURF *)(a4 + 32);
      if ( v45 )
        GreDereferenceObject(v45, 0);
      v37 = *(HSURF *)(a4 + 40);
    }
    if ( v37 )
      GreDereferenceObject(v37, 0);
    return 0LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v9;
  memmove(v9, *(const void **)(a4 + 104), (unsigned int)Size);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 112);
  v18 = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v18;
  v19 = 0;
  v20 = *(_DWORD *)(a1 + 92);
  if ( v20 > 0 )
  {
    v21 = *(int **)(a1 + 104);
    while ( *v21 >= 0 && *v21 < *(_DWORD *)(a1 + 88) )
    {
      ++v19;
      ++v21;
      if ( v19 >= v20 )
        goto LABEL_44;
    }
    goto LABEL_42;
  }
LABEL_44:
  v23 = 0LL;
  if ( v20 > 0 )
  {
    v24 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v24 + v18)) >= 6 )
        break;
      v23 = (unsigned int)(v23 + 1);
      v24 += 4LL;
    }
    while ( (int)v23 < v20 );
  }
  if ( (_DWORD)v23 != v20 )
  {
    v25 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        LOBYTE(v23) = 3;
        v27 = HMValidateHandle(*(_QWORD *)(v26 + *(_QWORD *)(a1 + 96)), v23);
        v29 = v27;
        if ( !v27 )
          break;
        v30 = *(_DWORD *)(v27 + 80);
        if ( (v30 & 8) != 0 || (v30 & 0x40) == 0 || PsGetCurrentProcess(v28) != gpepCSRSS && !*(_QWORD *)(v29 + 24) )
          break;
        *(_QWORD *)(v26 + *(_QWORD *)(a1 + 96)) = 0LL;
        *(_QWORD *)&v46 = *(_QWORD *)(a1 + 96) + 8LL * v25;
        *((_QWORD *)&v46 + 1) = v29;
        v47 = v46;
        HMAssignmentLock(&v47);
        ++v25;
        v26 += 8LL;
        if ( v25 >= *(_DWORD *)(a1 + 88) )
          goto LABEL_82;
      }
      v31 = v25 - 1;
      if ( v31 >= 0 )
      {
        v32 = 8LL * v31;
        do
        {
          HMAssignmentUnlock(v32 + *(_QWORD *)(a1 + 96));
          v32 -= 8LL;
          --v31;
        }
        while ( v31 >= 0 );
      }
      v22 = 1402LL;
      goto LABEL_43;
    }
LABEL_82:
    *(_QWORD *)(a1 + 48) = a1;
    v42 = *(_DWORD *)(a1 + 80);
    if ( (v42 & 0x40) == 0 )
    {
      v43 = *(_QWORD *)(a1 + 24);
      if ( !v43 )
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
LABEL_87:
        *(_DWORD *)(a1 + 80) |= 0x100u;
        return 1LL;
      }
      if ( (v42 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v43 + 696);
        *(_QWORD *)(v43 + 696) = a1;
        goto LABEL_87;
      }
    }
    return 1LL;
  }
LABEL_42:
  v22 = 87LL;
LABEL_43:
  UserSetLastError(v22);
  Win32FreePool(*(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
