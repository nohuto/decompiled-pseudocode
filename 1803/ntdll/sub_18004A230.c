/*
 * XREFs of sub_18004A230 @ 0x18004A230
 * Callers:
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetThreadSubProcessTag @ 0x180028650 (RtlSetThreadSubProcessTag.c)
 *     sub_18004A688 @ 0x18004A688 (sub_18004A688.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8B7C @ 0x1800D8B7C (sub_1800D8B7C.c)
 *     sub_1800D8E84 @ 0x1800D8E84 (sub_1800D8E84.c)
 */

__int64 __fastcall sub_18004A230(_DWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r12d
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // r9
  volatile signed __int32 *v9; // rdi
  unsigned __int64 v10; // rcx
  int v11; // esi
  __int64 v13; // rbx
  void *v14; // r12
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  int v21; // eax
  int v22; // [rsp+40h] [rbp-98h]
  int v23; // [rsp+44h] [rbp-94h]
  int v24; // [rsp+48h] [rbp-90h]
  volatile signed __int32 *v25; // [rsp+50h] [rbp-88h]
  __int64 v26; // [rsp+60h] [rbp-78h]
  __int64 v27; // [rsp+70h] [rbp-68h] BYREF
  __int64 v28; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-58h]
  char *v30; // [rsp+88h] [rbp-50h]
  void *v31; // [rsp+90h] [rbp-48h]
  volatile signed __int64 *v32; // [rsp+98h] [rbp-40h]
  BOOL v33; // [rsp+E0h] [rbp+8h]
  int v35; // [rsp+F0h] [rbp+18h]
  unsigned int v36; // [rsp+F8h] [rbp+20h]

  v35 = (int)a3;
  v4 = (int)a3;
  v27 = 0LL;
  v28 = 0LL;
  v23 = 0;
  v30 = (char *)a1 + (unsigned int)a1[11];
  v32 = (volatile signed __int64 *)(a2 + 56);
  RtlAcquireSRWLockExclusive(a2 + 56, a2, a3, a4);
  v7 = (volatile signed __int32 *)(a2 + 64);
  v29 = a2 + 64;
  v8 = *(volatile signed __int32 **)(a2 + 64);
  v25 = v8;
  while ( v8 != v7 )
  {
    v9 = v8 - 2;
    v10 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
    _InterlockedIncrement(v8 + 18);
    v11 = a1[6] & v8[14];
    if ( !*((_DWORD *)v8 + 22)
      && v11
      && ((v11 & 1) != 0 && (!*((_DWORD *)v9 + 14) || a1[4] - *((_DWORD *)v9 + 14) > 0)
       || (v11 & 0xFFFFFFFE) != 0 && !*((_DWORD *)v9 + 40)
       || (v11 & 0x10) != 0)
      && (!*((_DWORD *)v9 + 30) || v10 >= *((_QWORD *)v9 + 16) || *((_DWORD *)v9 + 37) < a1[4])
      && (!v4 || *((_DWORD *)v9 + 36)) )
    {
      v22 = 0;
      v24 = 0;
      v26 = *((_QWORD *)v9 + 4);
      v13 = *(_QWORD *)(*((_QWORD *)v9 + 3) + 16LL);
      v14 = (void *)*((_QWORD *)v9 + 6);
      *((_QWORD *)v9 + 19) = NtCurrentTeb()->ClientId.UniqueThread;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 56));
      v17 = 0LL;
      v36 = 0;
      v33 = 0;
      v18 = *((_QWORD *)v9 + 9);
      if ( !v18 || (v33 = !_interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0LL)) )
      {
LABEL_18:
        if ( !*((_DWORD *)v9 + 24) )
        {
          v24 = 1;
          v31 = RtlSetThreadSubProcessTag(v14);
          if ( (v11 & 1) != 0 )
            v22 = _guard_dispatch_icall_fptr();
          if ( (v11 & 0x10) != 0 && !*((_DWORD *)v9 + 24) && (v22 >= 0 || (v9[15] & 4) == 0) )
          {
            _guard_dispatch_icall_fptr();
            v22 = 0;
          }
          if ( (v11 & 0xFFFFFFEE) != 0 )
          {
            v22 = 0;
            _guard_dispatch_icall_fptr();
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v19 = (__int64)NtCurrentPeb()->HotpatchInformation + 564;
          else
            v19 = 2147353486LL;
          if ( *(_BYTE *)v19 )
            sub_1800D8B7C(v13, a1[4], (_DWORD)v9, a2, v26, v11, v22);
          RtlSetThreadSubProcessTag(v31);
        }
        if ( v33 )
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)v9 + 9) + 24LL));
        v20 = a2 + 56;
        if ( v24 )
        {
          RtlAcquireSRWLockExclusive(a2 + 56, v17, v15, v16);
          v17 = 1LL;
          v36 = 1;
          if ( v22 != -1073741267 && v22 != -1073741801 )
          {
            if ( !*((_DWORD *)v9 + 14) || a1[4] - *((_DWORD *)v9 + 14) > 0 )
              *((_DWORD *)v9 + 14) = a1[4];
            if ( (v9[15] & 4) != 0 && *((_DWORD *)v9 + 34) )
            {
              *((_DWORD *)v9 + 30) = 0;
              *((_QWORD *)v9 + 17) = 0LL;
              *((_QWORD *)v9 + 16) = 0LL;
              *((_DWORD *)v9 + 37) = 0;
            }
LABEL_46:
            v21 = 0;
LABEL_47:
            *((_DWORD *)v9 + 36) = v21;
            if ( !(_DWORD)v17 )
              RtlAcquireSRWLockExclusive(v20, v17, v15, v16);
            *((_QWORD *)v9 + 19) = 0LL;
            v8 = v25;
            v4 = v35;
            goto LABEL_10;
          }
          if ( (v9[15] & 4) == 0 )
            goto LABEL_46;
          v23 = 1;
          sub_1800D8E84(v9, (unsigned int)v22, (unsigned int)a1[4]);
        }
        v17 = v36;
        goto LABEL_46;
      }
      if ( v35 == 1 )
      {
        RtlAcquireSRWLockExclusive(*((_QWORD *)v9 + 9) + 24LL, 0LL, v15, v16);
        v33 = 1;
        goto LABEL_18;
      }
      v21 = 1;
      v20 = a2 + 56;
      goto LABEL_47;
    }
LABEL_10:
    v25 = *(volatile signed __int32 **)v8;
    sub_18004A688(v9, &v27, &v28);
    v8 = v25;
    v7 = (volatile signed __int32 *)v29;
    if ( v27 )
    {
      _guard_dispatch_icall_fptr();
      v8 = v25;
      v7 = (volatile signed __int32 *)v29;
    }
  }
  RtlReleaseSRWLockExclusive(v32);
  return v23 != 0 ? 0xC000022D : 0;
}
