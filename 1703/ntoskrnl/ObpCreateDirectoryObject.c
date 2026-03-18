/*
 * XREFs of ObpCreateDirectoryObject @ 0x140442400
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x1404423D8 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x1404423E4 (NtCreateDirectoryObject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 a1, __int64 a2, int a3, void *a4, int a5)
{
  _QWORD *v6; // r12
  KPROCESSOR_MODE PreviousMode; // si
  int inserted; // edi
  int v10; // r14d
  int v11; // edx
  int v12; // eax
  PVOID v13; // [rsp+50h] [rbp-38h]
  PVOID Object; // [rsp+60h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp-20h] BYREF

  v6 = (_QWORD *)a1;
  v13 = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_23;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        a1 = (__int64)v6;
      *(_QWORD *)a1 = *(_QWORD *)a1;
      goto LABEL_7;
    }
LABEL_23:
    inserted = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL),
        v13 = Object,
        inserted >= 0) )
  {
    LOBYTE(a4) = PreviousMode;
    LOBYTE(a1) = PreviousMode;
    inserted = ObCreateObjectEx(a1, (_DWORD)ObpDirectoryObjectType, a3, (_DWORD)a4);
    if ( inserted >= 0 )
    {
      memset(0LL, 0, 0x158uLL);
      MEMORY[0x128] = 0LL;
      MEMORY[0x154] = -1;
      v10 = 0;
      if ( v13 )
      {
        v10 = 4;
        MEMORY[0x138] = v13;
        v13 = 0LL;
        if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
          v10 = 20;
      }
      v11 = v10 | 8;
      if ( (a5 & 1) == 0 )
        v11 = v10;
      v12 = v11 | 0x20;
      if ( (a5 & 2) == 0 )
        v12 = v11;
      MEMORY[0x150] |= v12;
      inserted = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v15);
      *v6 = v15;
    }
  }
LABEL_9:
  if ( v13 )
    ObfDereferenceObject(v13);
  return (unsigned int)inserted;
}
