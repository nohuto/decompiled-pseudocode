/*
 * XREFs of xxxSetClassData @ 0x1C0116768
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C01166FC (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01C321C (xxxSetClassLong.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     MapClientToServerPfn @ 0x1C003701C (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C003AEB8 (MapClientNeuterToClientPfn.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C00E2DF8 (GetCPD.c)
 *     ClassLock @ 0x1C00EB620 (ClassLock.c)
 *     xxxClientWOWGetProcModule @ 0x1C00ECD18 (xxxClientWOWGetProcModule.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F9260 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C0106BB8 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C0115F9C (MapServerToClientPfn.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C2E24 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v8; // rdi
  __int16 v9; // r14
  int v10; // r15d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  __int64 v13; // rax
  unsigned __int64 result; // rax
  signed int v15; // ebx
  __int64 v16; // r15
  __int64 v17; // r13
  _DWORD *v18; // rax
  char v19; // cl
  __int64 v20; // rdi
  int ClassStyle; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // ecx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // rax
  __int16 v40; // ax
  __int64 v41; // rcx
  __int16 v42; // r11
  __int16 v43; // r11
  __int64 CPD; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING v57; // [rsp+48h] [rbp-70h] BYREF
  __int64 v58[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v59[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp+8h]

  v5 = a3;
  v8 = *((_QWORD *)a1 + 21);
  v9 = 0;
  v10 = 0;
  switch ( a2 )
  {
    case 0xFFFFFFDE:
      goto LABEL_89;
    case 0xFFFFFFE8:
      if ( (*(_WORD *)(v8 + 34) & 1) != 0 )
      {
        v11 = MapServerToClientPfn(*(_QWORD *)(v8 + 96), a4);
        v60 = v11;
        v43 = v42 & 0xFFFE;
        *(_WORD *)(v8 + 34) = v43;
        if ( a4 )
          *(_WORD *)(v8 + 34) = v43 | 2;
      }
      else
      {
        v11 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), 0LL, a4);
        v60 = v11;
        if ( v11 == *(_QWORD *)(v8 + 96) && a4 != ((v12 >> 1) & 1) )
          v10 = 2 - (a4 != 0);
      }
      if ( v10 )
      {
        CPD = GetCPD(v8, v10 | 0x10u, v11);
        v45 = v60;
        if ( CPD )
          v45 = CPD;
        v60 = v45;
      }
      if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v46 = HMValidateHandleNoRip(v5, 7);
        if ( v46 )
          v5 = *(_QWORD *)(*(_QWORD *)(v46 + 40) + 16LL);
      }
      *(_QWORD *)(v8 + 96) = v5;
      v13 = MapClientToServerPfn(v5);
      if ( v13 )
      {
        *(_QWORD *)(v8 + 96) = v13;
        *(_WORD *)(v8 + 34) = *(_WORD *)(v8 + 34) & 0xFFFC | 1;
      }
      else if ( a4 )
      {
        *(_WORD *)(v8 + 34) |= 2u;
      }
      else
      {
        *(_WORD *)(v8 + 34) &= ~2u;
      }
      if ( (*(_BYTE *)(v8 + 34) & 8) != 0 )
      {
        v47 = *(int *)(v8 + 104);
        if ( (unsigned int)ClassLock(v8, v58) )
        {
          if ( (*(_BYTE *)(v8 + 34) & 1) == 0 )
            v9 = xxxClientWOWGetProcModule(*(_QWORD *)(v8 + 96), v48, v49, v50);
          *(_WORD *)(v47 + v8 + 174) = v9;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v52 = v58[0];
          *(_QWORD *)(ThreadWin32Thread + 16) = v58[0];
          ClassUnlockWorker((struct tagCLS *)v8, v52);
        }
        else
        {
          UserSetLastError(5LL);
          *(_WORD *)(v47 + v8 + 174) = 0;
        }
      }
      return v60;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(v8 + 34) & 8) != 0 )
        *(_DWORD *)(*(int *)(v8 + 104) + v8 + 168) = a3;
      return 0LL;
    case 0xFFFFFFEC:
      v40 = *(_WORD *)(v8 + 34);
      if ( (v40 & 8) != 0 )
      {
        if ( (v40 & 0x10) != 0 )
        {
          v41 = *(int *)(v8 + 104);
          result = *(unsigned __int16 *)(v41 + v8 + 172);
          *(_WORD *)(v41 + v8 + 172) = a3;
        }
        else
        {
          *(_WORD *)(*(int *)(v8 + 104) + v8 + 172) = a3;
          *(_WORD *)(v8 + 34) |= 0x10u;
          return *(int *)(v8 + 104);
        }
        return result;
      }
LABEL_29:
      v27 = 87LL;
LABEL_85:
      UserSetLastError(v27);
      return 0LL;
    case 0xFFFFFFEE:
      v36 = (unsigned int)(*(_DWORD *)(v8 + 108) + *(_DWORD *)(v8 + 80));
      v37 = 0;
      v38 = &gDefaultServerClasses;
      while ( *(_WORD *)(v8 + 8) != *(_WORD *)(gpsi + 2LL * ((*v38 >> 3) & 0x1F) + 852) )
      {
        ++v37;
        v38 += 12;
        if ( v37 >= 8 )
          goto LABEL_62;
      }
      v39 = *((unsigned int *)&gDefaultServerClasses + 12 * v37 + 6);
      if ( v5 >= v39 )
      {
        *(_DWORD *)(v8 + 80) = v39;
        LODWORD(v5) = v5 - v39;
      }
      else
      {
        if ( (*(_WORD *)(v8 + 34) & 0x200) != 0 )
          goto LABEL_84;
        *(_DWORD *)(v8 + 80) = 0;
      }
LABEL_62:
      *(_DWORD *)(v8 + 108) = v5;
      return v36;
    case 0xFFFFFFF2:
    case 0xFFFFFFF4:
LABEL_89:
      if ( (unsigned int)ClassLock(*((_QWORD *)a1 + 21), v59) )
      {
        v53 = xxxSetClassCursor(a1, (struct tagCLS *)v8, a2, v5);
        v54 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(v54 + 16) = v59[0];
        ClassUnlockWorker((struct tagCLS *)v8, v55);
        return v53;
      }
LABEL_84:
      v27 = 5LL;
      goto LABEL_85;
  }
  if ( a2 != -8 )
  {
    if ( a2 != -32 )
    {
      v15 = a2 + 34;
      if ( (int)(a2 + 34) >= 0 )
      {
        v16 = v15;
        if ( byte_1C02EDE68[v15] )
        {
          _mm_lfence();
          v17 = *(_QWORD *)(v8 + 64);
          v18 = (_DWORD *)(v17 + byte_1C02EDE68[v15]);
          v19 = byte_1C02EDE90[v15];
          if ( v19 == 4 )
          {
            v20 = (unsigned int)*v18;
            *v18 = a3;
            if ( a2 == -26 && (_DWORD)v20 != (_DWORD)a3 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              ClassStyle = DwmGetClassStyle((__int64)a1);
              v26 = (void *)ReferenceDwmApiPort(v23, v22, v24, v25);
              DwmAsyncChildStyleChange(v26, *(_QWORD *)a1, a2, ClassStyle);
            }
          }
          else if ( v19 == 8 )
          {
            v20 = *(_QWORD *)v18;
            *(_QWORD *)v18 = a3;
          }
          else
          {
            v20 = *(unsigned __int16 *)v18;
            *(_WORD *)v18 = a3;
          }
          v28 = *(_QWORD **)(v17 + 72);
          if ( v28 )
          {
            v29 = byte_1C02EDE68[v16];
            v30 = byte_1C02EDE90[v16];
            do
            {
              if ( v30 == 4 )
              {
                v20 = *(unsigned int *)((char *)v28 + v29);
                *(_DWORD *)((char *)v28 + v29) = v5;
              }
              else if ( v30 == 8 )
              {
                v20 = *(_QWORD *)((char *)v28 + v29);
                *(_QWORD *)((char *)v28 + v29) = v5;
              }
              else
              {
                v20 = *(unsigned __int16 *)((char *)v28 + v29);
                *(_WORD *)((char *)v28 + v29) = v5;
              }
              v28 = (_QWORD *)*v28;
            }
            while ( v28 );
          }
          return v20;
        }
      }
      v27 = 1413LL;
      goto LABEL_85;
    }
    goto LABEL_29;
  }
  v31 = *(_QWORD *)(v8 + 144);
  v32 = *(_QWORD *)(a3 + 16);
  v33 = *(_QWORD *)(v32 + 8);
  if ( (v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v32 + 8));
    if ( DestinationString.Length )
    {
      if ( !(unsigned int)AllocateUnicodeString(&v57, &DestinationString.Length) )
        return 0LL;
      *(_QWORD *)(v8 + 144) = v57.Buffer;
    }
    else
    {
      *(_QWORD *)(v8 + 144) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(v8 + 144) = v33;
  }
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( (v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    Win32FreePool(v31);
  v34 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = *(_QWORD *)v5;
  *(_QWORD *)v5 = v34;
  v35 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = v35;
  if ( a4 )
    return *(_QWORD *)v5;
  return v35;
}
