/*
 * XREFs of NtGdiHLSurfSetInformation @ 0x1C00BC2B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSfmOpenCompositorRef @ 0x1C00BC52C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00BC634 (GreSfmCloseCompositorRef.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00BCCEC (GreSetRedirectionSurfaceSignaling.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00BDA1C (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreHLsurfSetPresentFlags @ 0x1C024E508 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C024E614 (GreHLsurfSetUpdateId.c)
 *     GreSfmGenerateMoveData @ 0x1C027F910 (GreSfmGenerateMoveData.c)
 */

__int64 __fastcall NtGdiHLSurfSetInformation(HLSURF a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rcx
  NTSTATUS updated; // eax
  int v16; // edx
  HDEV v17; // rax
  int HDEV; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG v21; // eax
  int v22[4]; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-30h]

  v5 = -1073741811;
  if ( a2 >= 11 )
  {
    v5 = -1073741821;
    v7 = 0;
    goto LABEL_66;
  }
  v6 = (unsigned int)(a2 - 1);
  if ( a2 == 1 )
  {
    v7 = 0;
    if ( !a3 )
      goto LABEL_51;
    if ( a4 < 4 )
    {
      v5 = -1073741306;
      goto LABEL_51;
    }
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    v8 = *(_DWORD *)a3;
  }
  else
  {
    v6 = (unsigned int)(a2 - 2);
    if ( a2 == 2 )
    {
      v7 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 8 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_QWORD *)v22 = *(_QWORD *)a3;
      goto LABEL_45;
    }
    v6 = (unsigned int)(a2 - 5);
    if ( a2 == 5 )
    {
      v7 = 0;
      if ( !a3 )
        goto LABEL_51;
      if ( a4 < 0x18 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      if ( a3 >= W32UserProbeAddress )
        a3 = W32UserProbeAddress;
      *(_OWORD *)v22 = *(_OWORD *)a3;
      v23 = *(_QWORD *)(a3 + 16);
      goto LABEL_45;
    }
    v6 = (unsigned int)(a2 - 7);
    if ( a2 == 7 )
    {
      v7 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    }
    v6 = (unsigned int)(a2 - 8);
    if ( a2 == 8 )
    {
      v7 = 0;
      if ( a3 )
        goto LABEL_51;
      if ( a4 )
      {
        v5 = -1073741306;
        goto LABEL_51;
      }
      goto LABEL_45;
    }
    if ( a2 != 10 )
    {
      v5 = -1073741821;
      v7 = 0;
      goto LABEL_51;
    }
    v7 = 0;
    if ( !a3 )
      goto LABEL_51;
    if ( a4 < 4 )
    {
      v5 = -1073741306;
      goto LABEL_51;
    }
    if ( a3 >= W32UserProbeAddress )
      a3 = W32UserProbeAddress;
    v8 = *(_DWORD *)a3;
  }
  v22[0] = v8;
LABEL_45:
  v9 = a2 - 1;
  if ( !v9 )
  {
    UserGetHDEV(v6);
    updated = GreHLsurfSetPresentFlags(v20, a1, (unsigned int)v22[0]);
    goto LABEL_50;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    UserGetHDEV(v6);
    updated = GreHLsurfSetUpdateId(v19, a1, *(_QWORD *)v22);
    goto LABEL_50;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    if ( v23 || v22[2] || v22[3] )
    {
      HDEV = UserGetHDEV(v6);
      updated = GreSetRedirectionSurfaceSignaling(HDEV, (_DWORD)a1, v23, v22[2], v22[0]);
    }
    else
    {
      updated = GreSfmRegisterLogicalSurfaceForSignaling(a1, v22[0]);
    }
    goto LABEL_50;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    UserGetHDEV(v6);
    updated = GreSfmOpenCompositorRef(v13, a1);
LABEL_50:
    v5 = updated;
    goto LABEL_51;
  }
  v16 = v12 - 1;
  if ( !v16 )
  {
    v17 = (HDEV)UserGetHDEV(v6);
    updated = GreSfmCloseCompositorRef(v17, a1);
    goto LABEL_50;
  }
  if ( v16 == 2 )
    GreSfmGenerateMoveData((unsigned int)v22[0]);
LABEL_51:
  if ( v5 < 0 )
  {
LABEL_66:
    v21 = RtlNtStatusToDosError(v5);
    EngSetLastError(v21);
    return v7;
  }
  return 1;
}
