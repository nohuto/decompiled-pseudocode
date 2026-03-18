/*
 * XREFs of PnpGetDeviceLocationStrings @ 0x1404DC26C
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x1404462B0 (PiQueryRemovableDeviceOverride.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PnpQueryInterface @ 0x1404DDD80 (PnpQueryInterface.c)
 */

__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, char **a2, _DWORD *a3)
{
  __int64 v3; // rsi
  char *v4; // r14
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  PVOID *PoolWithTag; // rax
  PVOID *v9; // r13
  SIZE_T v10; // rbx
  int v11; // r15d
  PVOID v12; // rax
  _DWORD *v13; // r12
  int v14; // r13d
  int Interface; // ebx
  int v16; // r8d
  int v17; // r10d
  unsigned int v18; // r9d
  _WORD *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rdi
  PVOID v24; // rax
  _WORD *v25; // rax
  int v26; // r12d
  char v27; // si
  char v28; // dl
  char v29; // r8
  __int64 v30; // rcx
  SIZE_T v31; // rdi
  PVOID v32; // rax
  unsigned int v33; // r10d
  char *v34; // rdi
  unsigned int v35; // esi
  unsigned int v36; // ebx
  unsigned int v37; // eax
  unsigned int v38; // r15d
  char *v39; // r14
  char v40; // r13
  char v41; // r9
  char v42; // r12
  unsigned int v43; // edx
  _WORD *v44; // rsi
  char v45; // dl
  char v46; // r8
  __int64 v47; // r8
  __int64 v48; // rcx
  char *v49; // r14
  _DWORD *v50; // r8
  int v51; // r11d
  __int64 v52; // rsi
  PVOID *v53; // rdi
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // r10d
  int v58; // [rsp+38h] [rbp-69h]
  unsigned int v59; // [rsp+3Ch] [rbp-65h]
  unsigned int v60; // [rsp+40h] [rbp-61h]
  PVOID *P; // [rsp+48h] [rbp-59h]
  char v62; // [rsp+50h] [rbp-51h]
  unsigned int v63; // [rsp+54h] [rbp-4Dh]
  void *Src; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v65; // [rsp+60h] [rbp-41h]
  unsigned int v66; // [rsp+64h] [rbp-3Dh]
  PVOID v67; // [rsp+68h] [rbp-39h]
  PVOID v68; // [rsp+70h] [rbp-31h]
  int v69; // [rsp+78h] [rbp-29h]
  __int64 v70; // [rsp+80h] [rbp-21h]
  char v71[8]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v72; // [rsp+90h] [rbp-11h]
  void (__fastcall *v73)(__int64); // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v74)(__int64, void **); // [rsp+A8h] [rbp+7h]
  __int64 v75; // [rsp+108h] [rbp+67h]
  char v76; // [rsp+108h] [rbp+67h]
  unsigned int v79; // [rsp+120h] [rbp+7Fh]

  v75 = a1;
  v62 = 0;
  v3 = a1;
  v58 = -1;
  v4 = 0LL;
  v59 = -1;
  v67 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( v3 == v5 )
    return 3221225486LL;
  v6 = 0;
  v7 = v3;
  do
  {
    v7 = *(_QWORD *)(v7 + 16);
    ++v6;
  }
  while ( v7 != v5 );
  v66 = v6;
  v70 = v6;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v6, 0x75737050u);
  P = PoolWithTag;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 8LL * v6);
    v10 = 4LL * v6;
    v11 = 1;
    v12 = ExAllocatePoolWithTag(PagedPool, v10, 0x75737050u);
    v68 = v12;
    v13 = v12;
    if ( v12 )
    {
      memset(v12, 0, v10);
      v79 = 1;
      v14 = 0;
      if ( v3 != IopRootDeviceNode )
      {
        while ( 1 )
        {
          Interface = PnpQueryInterface(*(PDEVICE_OBJECT *)(v3 + 32), 0LL, v71);
          if ( Interface < 0 )
          {
            v4 = 0LL;
            goto LABEL_87;
          }
          if ( v74 )
          {
            Src = 0LL;
            Interface = v74(v72, &Src);
            if ( Interface < 0 )
              goto LABEL_112;
            if ( !Src )
              Interface = -1073741637;
            if ( Interface < 0 )
            {
LABEL_112:
              if ( Src )
              {
                ExFreePoolWithTag(Src, 0);
                Src = 0LL;
              }
            }
            else
            {
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v13[v14] = 0;
              v19 = Src;
              while ( *v19 )
              {
                ++v16;
                v20 = -1LL;
                v13[v14] = v16;
                v21 = -1LL;
                do
                  ++v21;
                while ( v19[v21] );
                v17 += v21 + 1;
                v22 = -1LL;
                do
                  ++v22;
                while ( v19[v22] );
                do
                  ++v20;
                while ( v19[v20] );
                v19 += v20 + 1;
                if ( (unsigned int)v22 <= v18 )
                  LODWORD(v22) = v18;
                v18 = v22;
              }
              v23 = 2LL * (unsigned int)(v17 + 1);
              LODWORD(v4) = v18 + (_DWORD)v4;
              v79 *= v16;
              v24 = ExAllocatePoolWithTag(PagedPool, v23, 0x75737050u);
              P[v14] = v24;
              if ( v24 )
              {
                memmove(v24, Src, v23);
                v25 = P[v14];
                if ( *v25 )
                {
                  v26 = v58;
                  v27 = v62;
                  while ( 1 )
                  {
                    v28 = 0;
                    v29 = 0;
                    while ( 1 )
                    {
                      if ( *v25 == 33 )
                      {
                        v28 = 1;
                        goto LABEL_51;
                      }
                      if ( *v25 != 64 )
                        break;
                      v29 = 1;
LABEL_51:
                      ++v25;
                    }
                    if ( v29 )
                      v27 = 1;
                    if ( v28 && v26 == -1 )
                      v26 = v14;
                    v30 = -1LL;
                    do
                      ++v30;
                    while ( v25[v30] );
                    v25 += v30 + 1;
                    if ( !*v25 )
                    {
                      v62 = v27;
                      v3 = v75;
                      v58 = v26;
                      v13 = v68;
                      break;
                    }
                  }
                }
                ++v14;
              }
              else
              {
                Interface = -1073741670;
              }
              ExFreePoolWithTag(Src, 0);
              v6 = v66;
              Src = 0LL;
            }
          }
          else
          {
            Interface = -1073741823;
          }
          if ( v73 )
            v73(v72);
          if ( Interface < 0 )
          {
            v4 = (char *)v67;
            goto LABEL_87;
          }
          if ( Interface == 288 || v14 == v6 )
          {
            LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_53:
            v11 = v79;
            break;
          }
          v3 = *(_QWORD *)(v3 + 16);
          LODWORD(v4) = (_DWORD)v4 + 1;
          v75 = v3;
          if ( v3 == IopRootDeviceNode )
            goto LABEL_53;
        }
      }
      Interface = 0;
      v69 = 0;
      v31 = 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1);
      v32 = ExAllocatePoolWithTag(PagedPool, v31, 0x75737050u);
      v67 = v32;
      v4 = (char *)v32;
      if ( v32 )
      {
        memset(v32, 0, v31);
        v33 = v14 - 1;
        v60 = v14 - 1;
        v34 = v4;
        v63 = 0;
        v35 = 0;
        if ( !v11 )
        {
LABEL_86:
          *(_WORD *)v34 = 0;
          *a2 = v4;
          *a3 = (v34 - v4 + 2) >> 1;
          goto LABEL_87;
        }
        v36 = v58;
        v37 = v79;
LABEL_57:
        v38 = v33;
        v76 = 0;
        v39 = v34;
        v40 = 0;
        v41 = 0;
        v42 = 0;
LABEL_58:
        v65 = v37;
        v43 = v35 / (v37 / *((_DWORD *)v68 + v38)) % *((_DWORD *)v68 + v38);
        v44 = P[v38];
        if ( v43 )
        {
          v55 = v43;
          do
          {
            v56 = -1LL;
            do
              ++v56;
            while ( v44[v56] );
            v44 += v56 + 1;
            --v55;
          }
          while ( v55 );
          v36 = v58;
        }
        v45 = 0;
        v46 = 0;
        while ( 1 )
        {
          if ( *v44 == 33 )
          {
            v45 = 1;
          }
          else
          {
            if ( *v44 != 64 )
            {
              if ( v38 == v33 )
              {
                v51 = -1;
                v76 = v45;
                v40 = v45;
                v41 = v45;
                v42 = v45;
                if ( v45 )
                  v51 = v38;
                v59 = v51;
              }
              if ( v45 )
              {
                if ( !v62 && !v42 )
                  goto LABEL_84;
                v59 = v38;
                v40 = 1;
                v42 = v41 != 0 ? v42 : 0;
              }
              else
              {
                v76 = 0;
              }
              if ( v46 )
              {
                v57 = -1;
                v76 = v45;
                v39 = v34;
                v40 = v45;
                v42 = v45;
                if ( v45 )
                  v57 = v38;
                v59 = v57;
              }
              v47 = -1LL;
              do
                ++v47;
              while ( v44[v47] );
              memmove(v39, v44, 2 * v47);
              v48 = -1LL;
              do
                ++v48;
              while ( v44[v48] );
              v49 = &v39[2 * v48];
              if ( v38 )
              {
                v50 = v68;
                v41 = v76;
                v35 = v63;
                v33 = v60;
                *(_WORD *)v49 = 35;
                v39 = v49 + 2;
                v37 = v65 / v50[v38--];
                goto LABEL_58;
              }
              if ( !v40 || v42 && v59 <= v36 )
              {
                *(_WORD *)v49 = 0;
                v34 = v49 + 2;
              }
              v33 = v60;
LABEL_84:
              v37 = v79;
              v35 = v63 + 1;
              v63 = v35;
              if ( v35 >= v79 )
              {
                Interface = v69;
                v4 = (char *)v67;
                v13 = v68;
                goto LABEL_86;
              }
              goto LABEL_57;
            }
            v46 = 1;
          }
          ++v44;
        }
      }
      Interface = -1073741670;
LABEL_87:
      v9 = P;
    }
    else
    {
      Interface = -1073741670;
    }
    if ( v66 )
    {
      v52 = v70;
      v53 = v9;
      do
      {
        if ( *v53 )
          ExFreePoolWithTag(*v53, 0);
        ++v53;
        --v52;
      }
      while ( v52 );
    }
    ExFreePoolWithTag(v9, 0);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( Interface < 0 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Interface;
}
