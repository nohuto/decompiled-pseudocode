/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0010088 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C00275D0 (UserReferenceDwmApiPort.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0027680 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        void *a1,
        void *a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        void **a8,
        void *a9)
{
  void **v13; // rbx
  int v14; // edi
  void *v15; // rbx
  __int128 *v16; // rcx
  __int128 *v17; // rcx
  char v18; // al
  char v19; // al
  CompositionObject *v20; // r14
  __int64 v21; // rax
  void *v23; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-88h]
  _DWORD v27[12]; // [rsp+80h] [rbp-78h] BYREF

  Object[1] = a1;
  Object[2] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v23 = 0LL;
  memset(v27, 0, 0x2DuLL);
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v15 = *v13;
  v23 = v15;
  v27[0] = a4;
  v16 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v25 = *v16;
  *(_OWORD *)&v27[1] = v25;
  v17 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v17 = (__int128 *)MmUserProbeAddress;
  v26 = *v17;
  *(_OWORD *)&v27[5] = v26;
  LOBYTE(v27[9]) = a7;
  *(_DWORD *)((char *)&v27[9] + 1) = (a3 & 4) != 0;
  *(_DWORD *)((char *)&v27[10] + 1) = (a3 & 8) != 0;
  if ( (v27[0] & 9) != 9
    || (v27[0] & 2) != 0 && (v27[7] < v27[5] || v27[8] < v27[6] ? (v18 = 0) : (v18 = 1), !v18)
    || (v27[3] < v27[1] || v27[4] < v27[2] ? (v19 = 0) : (v19 = 1), !v19 || *(_QWORD *)&v27[1] || (_WORD)a1 == (_WORD)a2) )
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)Object);
    if ( v14 >= 0 )
    {
      v20 = (CompositionObject *)Object[0];
      if ( *((_DWORD *)Object[0] + 9) == 31 )
      {
        GreLockDwmState();
        v23 = 0LL;
        v14 = CompositionObject::OpenDwmHandle(v20, &v23);
        if ( v14 >= 0 )
        {
          v21 = UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt(v21, a1, a2, a3 & 1, (a3 & 2) != 0, v27, v15, v23);
        }
        GreUnlockDwmState();
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v20);
    }
  }
  return (unsigned int)v14;
}
