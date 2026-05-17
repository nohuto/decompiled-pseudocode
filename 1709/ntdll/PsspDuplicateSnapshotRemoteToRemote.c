/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x18005D680 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A0480 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0800 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A08A0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010B890 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v8; // r12
  unsigned int v9; // r13d
  signed int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h]
  _QWORD v41[144]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v42[218]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v43; // [rsp+868h] [rbp+768h]
  unsigned int v44; // [rsp+878h] [rbp+778h]
  __int64 v45; // [rsp+880h] [rbp+780h]
  __int64 v46; // [rsp+888h] [rbp+788h]
  __int64 v47; // [rsp+898h] [rbp+798h]
  __int64 v48; // [rsp+8B0h] [rbp+7B0h]
  __int64 v49; // [rsp+8D0h] [rbp+7D0h]
  __int64 v50; // [rsp+8F0h] [rbp+7F0h]
  __int64 v51; // [rsp+968h] [rbp+868h]

  v40 = a2;
  v39 = a4;
  v36 = 0LL;
  v35 = 0LL;
  *a4 = 0LL;
  v8 = a4;
  v9 = 0;
  memset(v41, 0, 0x478uLL);
  v10 = ZwReadVirtualMemory(a1, a2, v42, 1144LL, &v37);
  if ( v10 >= 0 )
  {
    if ( v37 == 1144 )
    {
      if ( v42[0] == 1146311504 )
      {
        v11 = (unsigned __int64)v44 << 6;
        v12 = 0xFFFFFFFFLL;
        if ( v11 <= 0xFFFFFFFF )
          v12 = (unsigned int)v11;
        v10 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v11 > 0xFFFFFFFF )
          goto LABEL_43;
        v9 = -1;
        if ( (unsigned int)v12 < 0xFFFFFB88 )
          v9 = v12 + 1144;
        v10 = (unsigned int)v12 >= 0xFFFFFB88 ? 0xC0000095 : 0;
        if ( (unsigned int)(v12 + 1144) < 0x478 )
        {
LABEL_43:
          if ( v10 >= 0 )
            goto LABEL_44;
          goto LABEL_54;
        }
        v13 = 8LL;
        v14 = v41;
        v15 = v42;
        do
        {
          v16 = v15[1];
          *(_OWORD *)v14 = *v15;
          v17 = v15[2];
          *((_OWORD *)v14 + 1) = v16;
          v18 = v15[3];
          *((_OWORD *)v14 + 2) = v17;
          v19 = v15[4];
          *((_OWORD *)v14 + 3) = v18;
          v20 = v15[5];
          *((_OWORD *)v14 + 4) = v19;
          v21 = v15[6];
          *((_OWORD *)v14 + 5) = v20;
          v22 = v15[7];
          v15 += 8;
          *((_OWORD *)v14 + 6) = v21;
          v14 += 16;
          *((_OWORD *)v14 - 1) = v22;
          --v13;
        }
        while ( v13 );
        v23 = v43;
        v24 = v15[1];
        *(_OWORD *)v14 = *v15;
        v25 = v15[2];
        *((_OWORD *)v14 + 1) = v24;
        v26 = v15[3];
        *((_OWORD *)v14 + 2) = v25;
        v27 = v15[4];
        *((_OWORD *)v14 + 3) = v26;
        v28 = v15[5];
        *((_OWORD *)v14 + 4) = v27;
        v29 = v15[6];
        v30 = *((_QWORD *)v15 + 14);
        *((_OWORD *)v14 + 5) = v28;
        *((_OWORD *)v14 + 6) = v29;
        v14[14] = v30;
        v41[109] = 0LL;
        v41[112] = 0LL;
        v41[115] = 0LL;
        v41[118] = 0LL;
        v41[122] = 0LL;
        v41[126] = 0LL;
        v41[141] = 0LL;
        if ( !v23 || (v10 = ZwDuplicateObject(a1, v23, a3, &v41[109], 0, 0, 2), v10 >= 0) )
        {
          if ( !v45 || (v10 = ZwDuplicateObject(a1, v45, a3, &v41[112], 0, 0, 2), v10 >= 0) )
          {
            if ( !v47 || (v10 = ZwDuplicateObject(a1, v47, a3, &v41[115], 0, 0, 2), v10 >= 0) )
            {
              if ( !v48 || (v10 = ZwDuplicateObject(a1, v48, a3, &v41[118], 0, 0, 2), v10 >= 0) )
              {
                if ( !v49 || (v10 = ZwDuplicateObject(a1, v49, a3, &v41[122], 0, 0, 2), v10 >= 0) )
                {
                  if ( !v50 || (v10 = ZwDuplicateObject(a1, v50, a3, &v41[126], 0, 0, 2), v10 >= 0) )
                  {
                    if ( !v51 || (v10 = ZwDuplicateObject(a1, v51, a3, &v41[141], 0, 0, 2), v10 >= 0) )
                    {
                      v36 = 0LL;
                      v34 = v9;
                      v10 = ZwAllocateVirtualMemory(a3, &v36, 0LL, &v34, 4096, 4);
                      if ( v10 >= 0 )
                      {
                        HIDWORD(v41[0]) = HIDWORD(v41[0]) & 0xFFFFFFF8 | 1;
                        if ( v41[113] )
                          v41[113] = v36 + 1144;
                        if ( LOWORD(v41[35]) )
                          v41[36] = v36 + 296;
                        v31 = 0LL;
                        v10 = NtWriteVirtualMemory(a3, v36, v41, v9, 0LL);
                        if ( v10 >= 0 )
                        {
                          if ( !v46 )
                          {
LABEL_42:
                            v10 = 0;
                            *v8 = v36;
                            goto LABEL_43;
                          }
                          v35 = 0LL;
                          v34 = 1LL;
                          v10 = ZwAllocateVirtualMemory(-1LL, &v35, 0LL, &v34, 4096, 4);
                          if ( v10 >= 0 )
                          {
                            if ( v12 )
                            {
                              while ( 1 )
                              {
                                v32 = v34;
                                if ( v34 > v12 - v31 )
                                  v32 = v12 - v31;
                                v10 = ZwReadVirtualMemory(a1, v31 + v46, v35, v32, &v37);
                                if ( v10 < 0 )
                                  goto LABEL_54;
                                if ( v37 != v32 )
                                  goto LABEL_53;
                                v10 = NtWriteVirtualMemory(a3, v31 + v36 + 1144, v35, v37, &v38);
                                if ( v10 < 0 )
                                  goto LABEL_54;
                                if ( v38 != v37 )
                                {
LABEL_53:
                                  v10 = -2147483635;
                                  goto LABEL_54;
                                }
                                v31 += v38;
                                if ( v31 >= v12 )
                                {
                                  v8 = v39;
                                  break;
                                }
                              }
                            }
                            ZwFreeVirtualMemory(-1LL, &v35, &v34, 0x8000LL);
                            v35 = 0LL;
                            goto LABEL_42;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741816;
      }
    }
    else
    {
      v10 = -2147483635;
    }
  }
LABEL_54:
  if ( v35 )
  {
    v34 = 0LL;
    ZwFreeVirtualMemory(-1LL, &v35, &v34, 0x8000LL);
  }
  if ( v36 )
  {
    v34 = v9;
    ZwFreeVirtualMemory(-1LL, &v36, &v34, 0x8000LL);
  }
  if ( v41[126] )
    ZwDuplicateObject(a3, v41[126], 0LL, 0LL, 0, 0, 1);
  if ( v41[122] )
    ZwDuplicateObject(a3, v41[122], 0LL, 0LL, 0, 0, 1);
  if ( v41[115] )
    ZwDuplicateObject(a3, v41[115], 0LL, 0LL, 0, 0, 1);
  if ( v41[118] )
    ZwDuplicateObject(a3, v41[118], 0LL, 0LL, 0, 0, 1);
  if ( v41[112] )
    ZwDuplicateObject(a3, v41[112], 0LL, 0LL, 0, 0, 1);
  if ( v41[109] )
    ZwDuplicateObject(a3, v41[109], 0LL, 0LL, 0, 0, 1);
  if ( v41[141] )
    ZwDuplicateObject(a3, v41[141], 0LL, 0LL, 0, 0, 1);
LABEL_44:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(a1, v40);
  return (unsigned int)v10;
}
