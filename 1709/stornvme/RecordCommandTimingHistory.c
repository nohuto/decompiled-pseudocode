/*
 * XREFs of RecordCommandTimingHistory @ 0x1C000DA08
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0011320 (NVMeCompletionDpcRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RecordCommandTimingHistory(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // r11
  unsigned int v8; // r9d
  char v9; // cl
  __int64 v10; // r9
  __int64 v11; // r8
  _DWORD *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rtt
  __int64 v36; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 3276);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 3288);
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 3280);
      *(_DWORD *)(a1 + 3280) = v8 + 1 < v6 ? v8 + 1 : 0;
      v9 = *(_BYTE *)(a2 + 2);
      v10 = 3LL * (v8 < v6 ? v8 : 0);
      if ( v9 == 40 )
        v11 = *(_QWORD *)(a2 + 104);
      else
        v11 = *(_QWORD *)(a2 + 56);
      result = v11 & 0xFFF;
      if ( (v11 & 0xFFF) != 0 )
        v11 = v11 - result + 4096;
      if ( *(_QWORD *)(v11 + 4160) )
      {
        if ( v9 == 40 )
          v12 = (_DWORD *)(a2 + 60);
        else
          v12 = (_DWORD *)(a2 + 16);
        *(_DWORD *)(v7 + 8 * v10) = *v12;
        v13 = *(_QWORD *)(v11 + 4168);
        v14 = *(_QWORD *)(v11 + 4160);
        if ( v13 < v14 )
        {
          *(_DWORD *)(v7 + 8 * v10 + 4) = 195935983;
        }
        else
        {
          LODWORD(v15) = 0;
          if ( a3 )
            v15 = 10000 * (1000 * ((v13 - v14) % a3) % a3) / a3
                + 10000 * (1000 * ((v13 - v14) % a3) / a3 + 1000 * ((v13 - v14) / a3));
          *(_DWORD *)(v7 + 8 * v10 + 4) = v15;
        }
        v16 = *(_QWORD *)(v11 + 4176);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v11 + 4168);
          if ( v16 < v17 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 8) = v17 - v16 > 0x100 ? 0xBADBEEF : 0;
          }
          else
          {
            LODWORD(v18) = 0;
            if ( a3 )
              v18 = 10000 * (1000 * ((v16 - v17) % a3) % a3) / a3
                  + 10000 * (1000 * ((v16 - v17) % a3) / a3 + 1000 * ((v16 - v17) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 8) = v18;
          }
          v19 = *(_QWORD *)(v11 + 4176);
          v20 = *(_QWORD *)(v11 + 4160);
          if ( v19 < v20 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 12) = 195935983;
          }
          else
          {
            LODWORD(v21) = 0;
            if ( a3 )
              v21 = 10000 * (1000 * ((v19 - v20) % a3) % a3) / a3
                  + 10000 * (1000 * ((v19 - v20) % a3) / a3 + 1000 * ((v19 - v20) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 12) = v21;
          }
          v22 = *(_QWORD *)(v11 + 4184);
          v23 = *(_QWORD *)(v11 + 4176);
          if ( v22 < v23 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 16) = v23 - v22 > 0x100 ? 0xBADBEEF : 0;
          }
          else
          {
            LODWORD(v24) = 0;
            if ( a3 )
              v24 = 10000 * (1000 * ((v22 - v23) % a3) % a3) / a3
                  + 10000 * (1000 * ((v22 - v23) % a3) / a3 + 1000 * ((v22 - v23) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 16) = v24;
          }
        }
        else
        {
          v25 = *(_QWORD *)(v11 + 4184);
          v26 = *(_QWORD *)(v11 + 4168);
          if ( v25 < v26 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 8) = 195935983;
          }
          else
          {
            LODWORD(v27) = 0;
            if ( a3 )
              v27 = 10000 * (1000 * ((v25 - v26) % a3) % a3) / a3
                  + 10000 * (1000 * ((v25 - v26) % a3) / a3 + 1000 * ((v25 - v26) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 8) = v27;
          }
          v28 = *(_QWORD *)(v11 + 4184);
          v29 = *(_QWORD *)(v11 + 4160);
          if ( v28 < v29 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 12) = 195935983;
          }
          else
          {
            LODWORD(v30) = 0;
            if ( a3 )
              v30 = 10000 * (1000 * ((v28 - v29) % a3) % a3) / a3
                  + 10000 * (1000 * ((v28 - v29) % a3) / a3 + 1000 * ((v28 - v29) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 12) = v30;
          }
          v31 = *(_QWORD *)(v11 + 4184);
          v32 = *(_QWORD *)(v11 + 4168);
          if ( v31 < v32 )
          {
            *(_DWORD *)(v7 + 8 * v10 + 16) = 195935983;
          }
          else
          {
            LODWORD(v33) = 0;
            if ( a3 )
              v33 = 10000 * (1000 * ((v31 - v32) % a3) % a3) / a3
                  + 10000 * (1000 * ((v31 - v32) % a3) / a3 + 1000 * ((v31 - v32) / a3));
            *(_DWORD *)(v7 + 8 * v10 + 16) = v33;
          }
        }
        result = *(_QWORD *)(v11 + 4192);
        v34 = *(_QWORD *)(v11 + 4184);
        if ( result < v34 )
        {
          *(_DWORD *)(v7 + 8 * v10 + 20) = 195935983;
        }
        else
        {
          if ( a3 )
          {
            v35 = 1000 * ((result - v34) % a3);
            v36 = v35 / a3 + 1000 * ((result - v34) / a3);
            result = 10000 * (v35 % a3) / a3;
            v5 = result + 10000 * v36;
          }
          *(_DWORD *)(v7 + 8 * v10 + 20) = v5;
        }
      }
    }
  }
  return result;
}
