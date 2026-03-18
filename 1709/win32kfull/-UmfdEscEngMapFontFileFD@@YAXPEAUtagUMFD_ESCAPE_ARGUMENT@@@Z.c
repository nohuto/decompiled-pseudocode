/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037790
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C00B3684 (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C00B374C (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00B37A0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00B4D5C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00B65D8 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0101884 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C01430F0 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C0143120 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  struct _FILEVIEW *v5; // rdi
  char *v6; // r14
  int v7; // edi
  int v8; // eax
  int v9; // r14d
  int v10; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v11[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _FILEVIEW *v12; // [rsp+40h] [rbp-78h] BYREF
  char *v13; // [rsp+48h] [rbp-70h]
  _DWORD v14[20]; // [rsp+60h] [rbp-58h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v13 = (char *)a1 + 8;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v11);
  v12 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_27;
  v10 = *(_DWORD *)v1;
  if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v10, &v12) )
    goto LABEL_27;
  memset(v14, 0, sizeof(v14));
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v5 = v12;
  if ( *((_QWORD *)v12 + 2) )
  {
    v4 = 0;
    ++*((_DWORD *)v12 + 25);
  }
  else
  {
    if ( !*((_QWORD *)v12 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      goto LABEL_27;
    }
    if ( *((_QWORD *)v12 + 4) )
    {
      if ( (int)MapViewOfSectionToFontDriverProcess(v12) < 0 )
        v3 = 0;
      else
        *((_DWORD *)v5 + 25) = 1;
      v4 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v4 )
  {
    v8 = bCreateSection(*((PCWSTR *)v5 + 10), (struct _FILEVIEW *)v14, 0, &v10, (*((_DWORD *)v5 + 10) & 8) != 0);
    v14[10] ^= (*((_DWORD *)v5 + 10) ^ v14[10]) & 0x20;
    if ( !v8 )
      goto LABEL_27;
    if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v14) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v14);
      goto LABEL_27;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)v5 + 25);
    if ( *((_QWORD *)v5 + 2) )
    {
      v9 = 0;
    }
    else
    {
      v9 = bMapRoutine(v5, v14, 1LL, (unsigned int)v10);
      v3 = v9;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v9 )
      vUnmapFileFD((struct _FILEVIEW *)v14, 1u);
  }
  if ( v3 )
  {
    v6 = (char *)*((_QWORD *)v5 + 2);
    v7 = *((_DWORD *)v5 + 6);
  }
  else
  {
    v7 = v10;
    v6 = v13;
  }
  if ( v3 )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v11);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v6;
    *(_DWORD *)v1[2] = v7;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_27:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v11);
}
