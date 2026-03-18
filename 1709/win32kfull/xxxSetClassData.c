/*
 * XREFs of xxxSetClassData @ 0x1C011CDDC
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C011CD70 (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C01C5F38 (xxxSetClassLong.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     xxxClientWOWGetProcModule @ 0x1C005AFA8 (xxxClientWOWGetProcModule.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ClassLock @ 0x1C0073454 (ClassLock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0073710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     MapClientToServerPfn @ 0x1C00761A0 (MapClientToServerPfn.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A0F3C (MapClientNeuterToClientPfn.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GetCPD @ 0x1C00F5458 (GetCPD.c)
 *     AllocateUnicodeString @ 0x1C0111828 (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C011F544 (MapServerToClientPfn.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01C5B38 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int16 v9; // r14
  int v10; // r15d
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // r11d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 result; // rax
  int v18; // ebx
  __int64 v19; // r15
  __int64 v20; // r13
  _DWORD *v21; // rax
  char v22; // cl
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  int ClassStyle; // ebx
  __int64 v27; // rcx
  void *v28; // rax
  char v29; // dl
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // ecx
  unsigned __int64 v38; // rax
  __int16 v39; // ax
  __int64 v40; // rcx
  __int16 v41; // r11
  __int16 v42; // r11
  __int64 CPD; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  struct _UNICODE_STRING v57; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v58[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v59[4]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp+8h]
  int v61; // [rsp+C8h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = (unsigned int)a2;
  v61 = (int)a2;
  v8 = *((_QWORD *)a1 + 21);
  v9 = 0;
  v10 = 0;
  switch ( (_DWORD)a2 )
  {
    case 0xFFFFFFDE:
      goto LABEL_90;
    case 0xFFFFFFE8:
      if ( (*(_WORD *)(v8 + 34) & 1) != 0 )
      {
        v11 = MapServerToClientPfn(*(_QWORD *)(v8 + 104), (unsigned int)a4);
        v60 = v11;
        v42 = v41 & 0xFFFE;
        *(_WORD *)(v8 + 34) = v42;
        if ( v4 )
          *(_WORD *)(v8 + 34) = v42 | 2;
      }
      else
      {
        v11 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 21), 0LL, a4);
        v60 = v11;
        if ( v11 == *(_QWORD *)(v8 + 104) && v12 != ((v13 >> 1) & 1) )
          v10 = 2 - (v4 != 0);
      }
      if ( v10 )
      {
        CPD = GetCPD(v8, v10 | 0x10u, v11);
        v44 = v60;
        if ( CPD )
          v44 = CPD;
        v60 = v44;
      }
      if ( (v5 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v45 = HMValidateHandleNoRip(v5, 7);
        if ( v45 )
          v5 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 16LL);
      }
      *(_QWORD *)(v8 + 104) = v5;
      v14 = MapClientToServerPfn(v5);
      if ( v14 )
      {
        *(_QWORD *)(v8 + 104) = v14;
        *(_WORD *)(v8 + 34) = *(_WORD *)(v8 + 34) & 0xFFFC | 1;
      }
      else if ( v4 )
      {
        *(_WORD *)(v8 + 34) |= 2u;
      }
      else
      {
        *(_WORD *)(v8 + 34) &= ~2u;
      }
      if ( (*(_BYTE *)(v8 + 34) & 8) != 0 )
      {
        v46 = *(int *)(v8 + 112);
        if ( (unsigned int)ClassLock(v8, v58, v15, v16) )
        {
          if ( (*(_BYTE *)(v8 + 34) & 1) == 0 )
            v9 = xxxClientWOWGetProcModule(*(_QWORD *)(v8 + 104));
          *(_WORD *)(v46 + v8 + 182) = v9;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49);
          *(_QWORD *)(ThreadWin32Thread + 16) = v58[0];
          ClassUnlockWorker((struct tagCLS *)v8);
        }
        else
        {
          UserSetLastError(5LL, v47);
          *(_WORD *)(v46 + v8 + 182) = 0;
        }
      }
      return v60;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(v8 + 34) & 8) != 0 )
        *(_DWORD *)(*(int *)(v8 + 112) + v8 + 176) = a3;
      return 0LL;
    case 0xFFFFFFEC:
      v39 = *(_WORD *)(v8 + 34);
      if ( (v39 & 8) != 0 )
      {
        if ( (v39 & 0x10) != 0 )
        {
          v40 = *(int *)(v8 + 112);
          result = *(unsigned __int16 *)(v40 + v8 + 180);
          *(_WORD *)(v40 + v8 + 180) = a3;
        }
        else
        {
          *(_WORD *)(*(int *)(v8 + 112) + v8 + 180) = a3;
          *(_WORD *)(v8 + 34) |= 0x10u;
          return *(int *)(v8 + 112);
        }
        return result;
      }
LABEL_28:
      v25 = 87LL;
LABEL_86:
      UserSetLastError(v25, (__int64)a2);
      return 0LL;
    case 0xFFFFFFEE:
      v36 = (unsigned int)(*(_DWORD *)(v8 + 116) + *(_DWORD *)(v8 + 80));
      v37 = 0;
      a2 = &gDefaultServerClasses;
      while ( *(_WORD *)(v8 + 8) != *(_WORD *)(gpsi + 2LL * ((*a2 >> 3) & 0x1F) + 852) )
      {
        ++v37;
        a2 += 12;
        if ( v37 >= 8 )
          goto LABEL_62;
      }
      v38 = *((unsigned int *)&gDefaultServerClasses + 12 * v37 + 6);
      if ( v5 >= v38 )
      {
        *(_DWORD *)(v8 + 80) = v38;
        LODWORD(v5) = v5 - v38;
      }
      else
      {
        if ( (*(_WORD *)(v8 + 34) & 0x200) != 0 )
          goto LABEL_85;
        *(_DWORD *)(v8 + 80) = 0;
      }
LABEL_62:
      *(_DWORD *)(v8 + 116) = v5;
      return v36;
    case 0xFFFFFFF2:
    case 0xFFFFFFF4:
LABEL_90:
      if ( (unsigned int)ClassLock(*((_QWORD *)a1 + 21), v59, a3, a4) )
      {
        v51 = xxxSetClassCursor(a1, (struct tagCLS *)v8, v6, v5);
        v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54);
        *(_QWORD *)(v55 + 16) = v59[0];
        ClassUnlockWorker((struct tagCLS *)v8);
        return v51;
      }
LABEL_85:
      v25 = 5LL;
      goto LABEL_86;
  }
  if ( (_DWORD)a2 != -8 )
  {
    if ( (_DWORD)a2 != -32 )
    {
      v18 = (_DWORD)a2 + 34;
      if ( (int)a2 + 34 >= 0 )
      {
        v19 = v18;
        if ( byte_1C02E4370[v18] )
        {
          _mm_lfence();
          v20 = *(_QWORD *)(v8 + 64);
          v21 = (_DWORD *)(v20 + byte_1C02E4370[v18]);
          v22 = byte_1C02E4398[v18];
          if ( v22 == 4 )
          {
            v23 = (unsigned int)*v21;
            *v21 = a3;
            if ( (_DWORD)v23 != (_DWORD)a3 && (_DWORD)a2 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
            {
              ClassStyle = DwmGetClassStyle((__int64)a1);
              v28 = (void *)ReferenceDwmApiPort(v27);
              DwmAsyncChildStyleChange(v28, *(_QWORD *)a1, v61, ClassStyle);
            }
          }
          else if ( v22 == 8 )
          {
            v23 = *(_QWORD *)v21;
            *(_QWORD *)v21 = a3;
          }
          else
          {
            v23 = *(unsigned __int16 *)v21;
            *(_WORD *)v21 = a3;
          }
          v24 = *(_QWORD **)(v20 + 72);
          if ( v24 )
          {
            v29 = byte_1C02E4398[v19];
            v30 = byte_1C02E4370[v19];
            do
            {
              if ( v29 == 4 )
              {
                v23 = *(unsigned int *)((char *)v24 + v30);
                *(_DWORD *)((char *)v24 + v30) = v5;
              }
              else if ( v29 == 8 )
              {
                v23 = *(_QWORD *)((char *)v24 + v30);
                *(_QWORD *)((char *)v24 + v30) = v5;
              }
              else
              {
                v23 = *(unsigned __int16 *)((char *)v24 + v30);
                *(_WORD *)((char *)v24 + v30) = v5;
              }
              v24 = (_QWORD *)*v24;
            }
            while ( v24 );
          }
          return v23;
        }
      }
      v25 = 1413LL;
      goto LABEL_86;
    }
    goto LABEL_28;
  }
  v31 = *(_QWORD *)(v8 + 152);
  v32 = *(_QWORD *)(a3 + 16);
  v33 = *(_QWORD *)(v32 + 8);
  if ( (v33 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v32 + 8));
    if ( DestinationString.Length )
    {
      if ( !(unsigned int)AllocateUnicodeString(&v57, &DestinationString.Length) )
        return 0LL;
      *(_QWORD *)(v8 + 152) = v57.Buffer;
    }
    else
    {
      *(_QWORD *)(v8 + 152) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(v8 + 152) = v33;
  }
  *(_QWORD *)(v5 + 16) = 0LL;
  if ( (v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    Win32FreePool(v31, a2, a3);
  v34 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 40) = *(_QWORD *)v5;
  *(_QWORD *)v5 = v34;
  v35 = *(_QWORD *)(v8 + 48);
  *(_QWORD *)(v8 + 48) = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = v35;
  if ( v4 )
    return *(_QWORD *)v5;
  return v35;
}
