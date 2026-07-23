/*
 * XREFs of PfSnCheckModernApp @ 0x14050DB3C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14050E34C (PfSnBeginAppLaunch.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x14006E7F0 (RtlQueryPackageIdentity.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1404C13D0 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PfSnCheckModernApp(_DWORD *a1, _DWORD *a2, WCHAR *a3, ULONG_PTR *a4)
{
  int v7; // ebp
  unsigned __int8 v8; // di
  _KPROCESS *Process; // r15
  PACCESS_TOKEN v10; // r12
  NTSTATUS v11; // eax
  unsigned int v12; // esi
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // r10d
  int v21; // r10d
  int v22; // r10d
  int v23; // r10d
  unsigned __int8 *v24; // r11
  signed __int64 v25; // r10
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // r10d
  int v30; // r10d
  int v31; // r10d
  int v32; // r10d
  int v33; // r10d
  int v34; // r10d
  int v35; // r10d
  int v36; // r10d
  ULONG_PTR AppIdSize; // [rsp+30h] [rbp-F8h] BYREF
  _DWORD *v38; // [rsp+38h] [rbp-F0h]
  WCHAR AppId[72]; // [rsp+40h] [rbp-E8h] BYREF

  v38 = a2;
  v7 = 0;
  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = PsReferencePrimaryToken(Process);
  AppIdSize = 130LL;
  v11 = RtlQueryPackageIdentity(v10, a3, a4, AppId, &AppIdSize, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = 314159LL;
    v15 = *a4 - 2;
    v8 = 1;
    v16 = 314159LL;
    if ( v15 >= 8 )
    {
      v17 = (unsigned __int64)v15 >> 3;
      v15 -= 8 * ((unsigned __int64)v15 >> 3);
      do
      {
        v18 = *((unsigned __int8 *)a3 + 6)
            + 37
            * (*((unsigned __int8 *)a3 + 5)
             + 37
             * (*((unsigned __int8 *)a3 + 4)
              + 37
              * (*((unsigned __int8 *)a3 + 3)
               + 37
               * (*((unsigned __int8 *)a3 + 2)
                + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
        v19 = *((unsigned __int8 *)a3 + 7);
        a3 += 4;
        v16 = v19 + 37 * v18;
        --v17;
      }
      while ( v17 );
    }
    if ( v15 >= 1 && v15 <= 7 )
    {
      v20 = v15 - 1;
      if ( !v20 )
      {
LABEL_17:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        goto LABEL_18;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
LABEL_16:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_17;
      }
      v22 = v21 - 1;
      if ( !v22 )
      {
LABEL_15:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_16;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_14:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_15;
      }
      v35 = v23 - 1;
      if ( !v35 )
      {
LABEL_39:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_14;
      }
      v36 = v35 - 1;
      if ( !v36 )
      {
LABEL_38:
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_39;
      }
      if ( v36 == 1 )
      {
        LODWORD(v16) = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (WCHAR *)((char *)a3 + 1);
        goto LABEL_38;
      }
    }
LABEL_18:
    v24 = (unsigned __int8 *)AppId;
    v25 = AppIdSize - 2;
    if ( (__int64)(AppIdSize - 2) >= 8 )
    {
      v26 = (unsigned __int64)v25 >> 3;
      v25 -= 8 * ((unsigned __int64)v25 >> 3);
      do
      {
        v27 = v24[6]
            + 37 * (v24[5] + 37 * (v24[4] + 37 * (v24[3] + 37 * (v24[2] + 37 * (v24[1] + 37 * (*v24 + 37 * v14))))));
        v28 = v24[7];
        v24 += 8;
        v14 = v28 + 37 * v27;
        --v26;
      }
      while ( v26 );
    }
    if ( v25 < 1 || v25 > 7 )
      goto LABEL_31;
    v29 = v25 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              v34 = v33 - 1;
              if ( v34 )
              {
                if ( v34 != 1 )
                  goto LABEL_31;
                LODWORD(v14) = *v24++ + 37 * v14;
              }
              LODWORD(v14) = *v24++ + 37 * v14;
            }
            LODWORD(v14) = *v24++ + 37 * v14;
          }
          LODWORD(v14) = *v24++ + 37 * v14;
        }
        LODWORD(v14) = *v24++ + 37 * v14;
      }
      LODWORD(v14) = *v24++ + 37 * v14;
    }
    LODWORD(v14) = *v24 + 37 * v14;
LABEL_31:
    v7 = v14 + v16;
    goto LABEL_3;
  }
  if ( v11 == -1073741275 )
  {
LABEL_3:
    v12 = 0;
    *v38 = v7;
    *a1 = v8;
  }
  ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v10);
  return v12;
}
